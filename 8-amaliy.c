#include <stdio.h>

int main() {
    int parol = 12345;
    int kiritilgan;

    printf("Parolni kiriting: ");
    scanf("%d", &kiritilgan);

    while (kiritilgan != parol) {
        printf("Noto'g'ri parol! Qayta kiriting: ");
        scanf("%d", &kiritilgan);
    }

    printf("Parol to'g'ri! Xush kelibsiz.\n");
    return 0;
}
