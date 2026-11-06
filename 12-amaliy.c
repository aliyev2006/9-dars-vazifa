#include <stdio.h>

int main() {
    int n;
    printf("1 dan 4 gacha son kiriting: ");
    scanf("%d", &n);

    switch (n) {
        case 1: printf("Bahor\n"); break;
        case 2: printf("Yoz\n"); break;
        case 3: printf("Kuz\n"); break;
        case 4: printf("Qish\n"); break;
        default: printf("Noto'g'ri son\n");
    }
    return 0;
}
