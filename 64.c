#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    int last[256];
    for(int i = 0; i < 256; i++) last[i] = -1;

    int start = 0, maxLen = 0;

    for(int i = 0; i < n; i++) {
        if(last[(int)s[i]] >= start)
            start = last[(int)s[i]] + 1;

        last[(int)s[i]] = i;

        int len = i - start + 1;
        if(len > maxLen) maxLen = len;
    }

    printf("%d", maxLen);
    return 0;
}