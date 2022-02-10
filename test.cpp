#include <iostream>

using namespace std;

struct student{
    string name;
    string email;
    string birthday;
};

int main() {
    student s;
    s.name = 'Iam Astudent';
    s.email = "generic@email.com";
    s.birthday = '2 February 2002';
    student *myStudent = &s;
    cout << s.email << endl;
    cout << myStudent->email << endl;
    cout << (&s)->email << endl;
}