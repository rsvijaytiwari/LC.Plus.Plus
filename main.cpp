#include <iostream>
using namespace std;

int main() {
    // 1 byte is of 8bit
    printf("Size of this data type ids %ld bits\n", sizeof(short int) * 8);
    printf("Size of this data type ids %ld bits\n", sizeof(int) * 8);
    printf("Size of this data type ids %ld bits\n", sizeof(long int) * 8);
    printf("Size of this data type ids %ld bits\n", sizeof(long long int) * 8);
    cout << endl;
    printf("Size of this data type ids %ld bits\n", sizeof(unsigned short int) * 8);
    printf("Size of this data type ids %ld bits\n", sizeof(unsigned int) * 8);
    printf("Size of this data type ids %ld bits\n", sizeof(unsigned long int) * 8);
    printf("Size of this data type ids %ld bits\n", sizeof(unsigned long long int) * 8);
    cout << endl;
    printf("Size of this data type ids %ld bits\n", sizeof(int16_t) * 8);
    printf("Size of this data type ids %ld bits\n", sizeof(int32_t) * 8);

    printf("Fun value of %d\n", 0x16);
    printf("Fun value of %d\n", 0b00010110);

    return 0;
}