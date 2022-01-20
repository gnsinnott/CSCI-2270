#include <iostream>
#include <string>

#include "bodyinfo.hpp"

using namespace std;

int main(int argc, char *argv[]) {

    if (argc < 3){
        cout << "missing command line arguments" << endl;
        return -1;
    }

    /* TODO 2: Collect height "inHeight" and weight "inWeight" from command line arguments
    *float inHeight = ...
    *float inWeight = ...
    */
    float inHeight = stoi(argv[1]);
    float inWeight = stoi(argv[2]);

    /* TODO 3: Assign data to BodyInfo variable
    *BodyInfo newBody;
    * ...
    */
    BodyInfo newBody;
    BodyInfo* ptr;
    ptr = &newBody;
    ptr->height = inHeight;
    ptr->weight = inWeight;


    /* TODO 4: Compute BMI using only pointer access
    * ...
    */
    float BMI = ptr->weight/(ptr->height*ptr->height);

    /* TODO 5: Print height, weight, and bmi.
    * ...
    */
    cout << "Height: " << ptr->height << ", " << "Weight: " << ptr->weight << ", " << "BMI: " << BMI << endl;
    
    return 0;
}
