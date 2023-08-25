
#include <cstdio>

using namespace std;

int main() {
    int life = 3;
    int points = 4;

    int score = 2;
//    score = score + points; // manual
    score+=points; //shorthand notation

    if (life != 5){
        puts("Into if block");
    }


    return 0;
}