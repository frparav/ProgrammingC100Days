#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);

    if(n > 0 && isalpha(s[0]))
        s[0] = toupper(s[0]);

    for(int i = 1; i < n; i++) {
        s[i] = tolower(s[i]);
    }

    printf("%s", s);
    return 0;
}