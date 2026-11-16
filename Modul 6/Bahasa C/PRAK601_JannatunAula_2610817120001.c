#include <stdio.h>

int main() {
    int row, column;
    int matrix[100][100];
    int i, j;
    scanf("%d %d", &row, &column);

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("%d", matrix[i][j]);
            if (j < column - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}