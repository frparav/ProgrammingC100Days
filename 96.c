#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main() {
    struct Employee e;
    scanf("%s %d %d %d %d", e.name, &e.id,
          &e.join.day, &e.join.month, &e.join.year);

    printf("%s %d %d-%d-%d", e.name, e.id,
           e.join.day, e.join.month, e.join.year);

    return 0;
}