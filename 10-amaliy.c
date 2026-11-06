#include <stdio.h>

int main() {
    int n;
    int musbat = 0, manfiy = 0;

    printf("Son kiriting (0 - to'xtatish): ");
    scanf("%d", &n);

    while (n != 0) {
        if (n > 0)
            musbat++;
        else
            manfiy++;
        printf("Son kiriting (0 - to'xtatish): ");
        scanf("%d", &n);
    }

    printf("Musbat sonlar: %d ta\n", musbat);
    printf("Manfiy sonlar: %d ta\n", manfiy);
    return 0;
}
