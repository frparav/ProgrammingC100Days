#include <stdio.h>

int main() {
    char src[100], dest[100];
    scanf("%s %s", src, dest);

    FILE *fs = fopen(src, "r");
    FILE *fd = fopen(dest, "w");

    int ch;
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    return 0;
}