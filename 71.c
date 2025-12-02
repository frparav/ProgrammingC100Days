#include <stdio.h>

int main() {
    char name[100];
    int age;

    scanf("%s", name);
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data written to info.txt successfully.");

    return 0;
}