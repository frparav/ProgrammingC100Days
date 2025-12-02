#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    int num, sum = 0, count = 0;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    printf("Sum: %d\n", sum);
    if (count > 0)
        printf("Average: %.2f", (float)sum / count);

    fclose(fp);
    return 0;
}