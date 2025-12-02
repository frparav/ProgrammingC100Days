#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student a, b;

    scanf("%s %d %f", a.name, &a.roll_no, &a.marks);
    scanf("%s %d %f", b.name, &b.roll_no, &b.marks);

    if(strcmp(a.name, b.name)==0 && a.roll_no==b.roll_no && a.marks==b.marks)
        printf("Identical");
    else
        printf("Not Identical");

    return 0;
}