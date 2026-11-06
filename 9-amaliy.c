#include <stdio.h>

int main() {
    long long jami = 0, pul;

    while (jami < 100000) {
        printf("Jamg'argan pulingizni kiriting: ");
        scanf("%lld", &pul);
        jami += pul;
    }

    printf("Jami yig'ilgan pul: %lld so'm\n", jami);
    return 0;
}
