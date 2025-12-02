#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTop(struct Student s[], int n) {
    int max = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[max].marks)
            max = i;
    }
    return s[max];
}

int main() {
    struct Student s[5];
    for(int i = 0; i < 5; i++)
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

    struct Student top = getTop(s, 5);

    printf("%s %d %.2f", top.name, top.roll_no, top.marks);

    return 0;
}