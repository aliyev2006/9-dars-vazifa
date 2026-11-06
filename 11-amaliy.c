#include <stdio.h>

int main() {
    int n;
    printf("1 - Avtomobil\n2 - Avtobus\n3 - Poyezd\n4 - Samolyot\n");
    printf("Tanlang: ");
    scanf("%d", &n);

    switch (n) {
        case 1: printf("Avtomobil\n"); break;
        case 2: printf("Avtobus\n"); break;
        case 3: printf("Poyezd\n"); break;
        case 4: printf("Samolyot\n"); break;
        default: printf("Noto'g'ri tanlov\n");
    }
    return 0;
}
