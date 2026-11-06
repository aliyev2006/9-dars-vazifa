#include <stdio.h>

int main() {
    int n;
    printf("Ikki xonali son kiriting: ");
    scanf("%d", &n);

    if (n < 0) n = -n;

    printf("Teskari tartibda: ");
    int k = 0;
    while (k < 2) {
        printf("%d", n % 10);
        n /= 10;
        k++;
    }
    printf("\n");
    return 0;
}
