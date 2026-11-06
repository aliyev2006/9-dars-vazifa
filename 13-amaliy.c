#include <stdio.h>

int main() {
    int n;
    printf("1 - Osh\n2 - Lag'mon\n3 - Manti\n4 - Sho'rva\n5 - Somsa\n");
    printf("Taom raqamini kiriting: ");
    scanf("%d", &n);

    switch (n) {
        case 1: printf("Osh\n"); break;
        case 2: printf("Lag'mon\n"); break;
        case 3: printf("Manti\n"); break;
        case 4: printf("Sho'rva\n"); break;
        case 5: printf("Somsa\n"); break;
        default: printf("Bunday taom yo'q\n");
    }
    return 0;
}
