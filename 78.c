#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    char ch;
    int vowels = 0, consonants = 0;

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\nConsonants: %d", vowels, consonants);
    fclose(fp);
    return 0;
}