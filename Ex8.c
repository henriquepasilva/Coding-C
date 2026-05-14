#include <stdio.h>

int main() {
    int n, M[10][10];

    printf("Dimensão da matriz (n x n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}