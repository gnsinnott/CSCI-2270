#include <iostream>

using namespace std;

int repeat(int n){
    if(n==1){
        return 2;
    }
    return((n-1)*repeat(n-1));
}
int main() {
    cout << repeat(5);
}