#include<iostream>
using namespace std;
int main(){
    //cout << "Hello World";
    string firstName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter yoyr last name: ";
    cin >> lastName;
    cout << "My full name is " << firstName + " " + lastName;
    return 0;
}