
#include <cstdio>

using namespace std;

int main() {
    bool isFbUser = true;
    bool isGoogleUser = true;
    bool isAdmin = true;

    if ((isFbUser || isGoogleUser) && isAdmin){
        puts("Welcome Admin");
    }else {
        puts("No Admin Access");
    }
    if (isFbUser || isGoogleUser){
        puts("Welcome User");
    }
    return 0;
}