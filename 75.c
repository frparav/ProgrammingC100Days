#include <stdio.h>

int main() {
    char text[200];
    fgets(text, sizeof(text), stdin);

    FILE *fp = fopen("info.txt", "a");

    fputs(text, fp);

    fclose(fp);

    return 0;
}