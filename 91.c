#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    scanf("%s %d %f", s.name, &s.roll_no, &s.marks);

    printf("%s %d %.2f", s.name, s.roll_no, s.marks);

    return 0;
}