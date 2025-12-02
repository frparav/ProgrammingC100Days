#include <stdio.h>

enum Items { ITEM1 = 1, ITEM2, ITEM3, ITEM4 };

int main() {
    enum Items i;
    for(i = ITEM1; i <= ITEM4; i++) {
        printf("Value: %d\n", i);
    }
    return 0;
}