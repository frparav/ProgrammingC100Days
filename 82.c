#include <stdio.h>

enum Signal { RED, YELLOW, GREEN };

int main() {
    enum Signal s;
    scanf("%d", &s);

    if (s == RED) printf("Stop");
    else if (s == YELLOW) printf("Wait");
    else if (s == GREEN) printf("Go");

    return 0;
}