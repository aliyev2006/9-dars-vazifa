#include <stdio.h>

int main() {
    int i = 10, sum = 0;
    while (i <= 30) {
        sum += i;
        i++;
    }
    printf("Yig'indi: %d\n", sum);
    return 0;
}
