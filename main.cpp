#include <iostream>
#include <string>

using namespace std;

int main() {
    int integer_array[4] = {1, 2, 3, 4};
    cout << integer_array[0] << endl;

    int another_array[4];
    another_array[0] = 9;
    another_array[1] = 91;

    cout << another_array[0] << endl;
    cout << another_array[1] << endl; // default is zero
    return 0;
}