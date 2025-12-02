#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "w");

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        char name[50];
        int roll, marks;
        scanf("%s %d %d", name, roll, marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");

    char name[50];
    int roll, marks;

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("%s %d %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}