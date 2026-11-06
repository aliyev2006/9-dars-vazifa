#include <stdio.h>

int main() {
    double a, b;
    char amal;

    printf("Birinchi son: ");
    scanf("%lf", &a);
    printf("Ikkinchi son: ");
    scanf("%lf", &b);
    printf("Amal (+, -, *, /): ");
    scanf(" %c", &amal);

    switch (amal) {
        case '+': printf("Natija: %.2f\n", a + b); break;
        case '-': printf("Natija: %.2f\n", a - b); break;
        case '*': printf("Natija: %.2f\n", a * b); break;
        case '/':
            if (b == 0)
                printf("Xatolik: 0 ga bo'lish mumkin emas!\n");
            else
                printf("Natija: %.2f\n", a / b);
            break;
        default: printf("Noto'g'ri amal belgisi\n");
    }
    return 0;
}
