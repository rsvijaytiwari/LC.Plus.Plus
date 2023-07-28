#include <iostream>
#include <string>

using namespace std;

int main() {
    string my_color;
    cout << "Enter Your Favorite Color: \n";
    getline(cin, my_color); // Getting input using getline
    cout << "Hey " << my_color << " is my favorite too";

    return 0;
}