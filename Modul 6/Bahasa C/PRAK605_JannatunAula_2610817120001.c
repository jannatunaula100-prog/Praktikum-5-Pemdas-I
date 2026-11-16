#include <stdio.h>

int main(void) {
    int n;
    int A[100][100], B[100][100], C[100][100];
    char text1[20], text2[20];

    if (scanf("%d", &n) != 1) {
        printf("Input tidak valid.\n");
        return 1;
    }
    if (n < 1 || n > 100) {
        printf("Ordo tidak valid.\n");
        return 1;
    }

    scanf("%19s %19s", text1, text2);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &A[i][j]) != 1) {
                printf("Input tidak valid.\n");
                return 1;
            }
        }
    }

    scanf("%19s %19s", text1, text2);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &B[i][j]) != 1) {
                printf("Input tidak valid.\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    printf("Matriks AXB\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", C[i][j]);
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}