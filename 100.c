#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *p = &s;

    scanf("%s %d %f", p->name, &p->roll_no, &p->marks);

    printf("%s %d %.2f", p->name, p->roll_no, p->marks);

    return 0;
}