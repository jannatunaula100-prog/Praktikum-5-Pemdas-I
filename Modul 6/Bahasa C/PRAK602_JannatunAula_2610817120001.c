#include <stdio.h>

int main(void) {
    int n;
    int zetsu[100];

    if (scanf("%d", &n) != 1) {
        printf("Input tidak valid.\n");
        return 1;
    }

    if (n < 1 || n > 100) {
        printf("Jumlah ruangan tidak valid.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &zetsu[i]) != 1) {
            printf("Input tidak valid.\n");
            return 1;
        }
    }
    for (int i = 0; i < n; i++) {
        zetsu[i] = zetsu[i] * (i + 1);
    }
    for (int i = 0; i < n; i++) {
        printf("%d", zetsu[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}