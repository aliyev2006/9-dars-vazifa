#include <stdio.h>

int main() {
    int n;
    double som;
    double usd = 12600, eur = 14700, rub = 160; // kurslarni o'zgartirishingiz mumkin

    printf("1 - Dollar (USD)\n2 - Yevro (EUR)\n3 - Rubl (RUB)\n");
    printf("Tanlang: ");
    scanf("%d", &n);
    printf("So'm miqdorini kiriting: ");
    scanf("%lf", &som);

    switch (n) {
        case 1: printf("%.2f USD\n", som / usd); break;
        case 2: printf("%.2f EUR\n", som / eur); break;
        case 3: printf("%.2f RUB\n", som / rub); break;
        default: printf("Noto'g'ri tanlov\n");
    }
    return 0;
}
