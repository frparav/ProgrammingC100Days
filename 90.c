#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender g;
};

int main() {
    struct Person p;
    scanf("%s %d", p.name, (int*)&p.g);

    if(p.g == MALE) printf("Male");
    else if(p.g == FEMALE) printf("Female");
    else printf("Other");

    return 0;
}