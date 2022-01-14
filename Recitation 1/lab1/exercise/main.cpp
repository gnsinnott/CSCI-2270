#include "addStudent.hpp"

// Function to split character seperated values and return array of strings
int split(string text, char delim, string splitArray[], int size) {
    int start = 0; //Start of first item to split
    int delimCount = 0; // How many delimeters where found
    int length = text.length(); // Total lenght of text
    if (length == 0) { // If string of length 0 return 0
        return 0;
    }
    for (int i = 0; i < length; i++){ // Itterate over text
        if (text[i] == delim) { // Check if char is delimiter
            splitArray[delimCount] = text.substr(start, i-start); // Set string in array split at location of delimeter count equal to substring from start to length of char location - start location
            start = i+1; // New start location is the char after the delimeter
            delimCount++; // Increase running count of delimiters
        }
    }
    if (delimCount > size-1){ // Delim count is equal to number of split strings -1, if greater than size-1 return -1
        return -1;
    }
    splitArray[delimCount] =  text.substr(start, length - start); // Add string found after last delimeter to the array at final delimCount location
    return delimCount+1; // Returns number of split strings which is 1 more than number of delimiters
}

int main(int argc, char* argv[])
{
    //check for number of arguments
    if(argc<2)
    {
        cout<< "file name missing"<<endl;
        return -1;
    }
    
    string fileName = argv[1];//TODO 1: collect the correct argument
    student array[4];
    
    //open the file
    ifstream myfile;
    myfile.open(fileName);
    
    string line;
    string name;
    string emailid;
    string birthday;
    int length=0;
    
    if(myfile.is_open())//check existance of the file
    {
        string splitArray[3];
        char delim = ',';
        int i = 0;
        //TODO 2:  Read each line from the file
        //          for each line do the following
        //              extract name, extract email, exract birthday
        //              call the addAstudent function to add them in the array
        while(getline(myfile, line))
        {
            split(line, delim, splitArray, 3);
            name = splitArray[0];
            emailid = splitArray[1];
            birthday = splitArray[2];
            addAstudent(array, name, birthday, emailid,i);
            i++;
          
        }
    }
    else{
        cout<< "err: can not open file"<<endl;
    }
    
    for(int i=0;i<4;i++)
    {
        cout<< "name:"<<array[i].name<<" email:"<<array[i].email<<" bday:"<<array[i].birthday<<endl;
    }
    
    return 0;
}