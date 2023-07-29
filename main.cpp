#include <iostream>
#include <string>

using namespace std;

int main() {
    int life;
    life = 4;

    int card;
    card = 40;
    int my_card = card;

    int *myp;
    myp = &card;

    cout << my_card << endl;
    cout << myp << endl;
    cout << *myp; //pointer dereference


    return 0;
}