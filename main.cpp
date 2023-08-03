#include <iostream>

using namespace std;

int main() {
    printf("Float size is %ld bits \n", sizeof(long) * 8);
    printf("Float size is %ld bits \n", sizeof(double) * 8);
    printf("Float size is %ld bits \n", sizeof(long double) * 8);

    float my_p_value = 20.2 + 20.2;

    if (my_p_value == 40.40002){
        puts("You got it right");
    }else {
        puts("Something");
    }
    printf("My P Value is: %1.30f in float\n", my_p_value);
    return 0;
}