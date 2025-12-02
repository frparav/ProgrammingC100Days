#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Month m;
    scanf("%d", &m);

    switch(m) {
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
            printf("31 days"); break;

        case APR: case JUN: case SEP: case NOV:
            printf("30 days"); break;

        case FEB:
            printf("28 or 29 days"); break;
    }

    return 0;
}