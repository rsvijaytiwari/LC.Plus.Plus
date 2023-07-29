#include <iostream>
#include <string>

using namespace std;

int main() {
    string first_name;
    string last_name;
    cout << "Enter Your First Name: ";
    getline(cin, first_name);
    cout << "Enter Your Last Name: ";
    getline(cin, last_name);
    cout << "Hey it your first name is " << first_name << " and last name is " << last_name;
    return 0;
}