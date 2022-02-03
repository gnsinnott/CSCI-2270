#include <iostream>

using namespace std;

void addfour(int array[], int cap, int &c){
    for (int i = 0; i < cap; i ++){
        array[i] = array[i] +4;
    }
    c++;
}

int main() {
    // int array[4];
    int c = 5;
    int *array = new int[4];
    for (int i = 0; i < 4; i++){
        array[i] = 1;
    }
    for (int i = 0; i < 4; i++){
        cout << array[i] << endl;
    }
    cout << c << endl;
    addfour(array, 4, c);
    cout << c << endl;
    for (int i = 0; i < 4; i++){
        cout << array[i] << endl;
    }
}