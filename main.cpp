#include <iostream>
using namespace std;

int main(){
    /*
     * Identifiers
     * Upper case and lower case letters: timTimmy, timtimmy
     * Numbers-0-9 //we can insert number between name and end of name and not in start.
     * Underscore: _
     * Conflict with reserved keywords like int, friend, if , inline
     * Non latin support
     * dont_go_beyond_31_characters
     * _at start means private
     * __means system keyword
     *
     */
    int number;
    cin >> number; // getting input from user
    printf("Your ID is %d\n", number + 3);
    return 0;
}