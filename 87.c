#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r;
    scanf("%d", &r);

    if(r == ADMIN) printf("Admin Access Granted");
    else if(r == USER) printf("User Access Granted");
    else if(r == GUEST) printf("Guest Access Limited");

    return 0;
}