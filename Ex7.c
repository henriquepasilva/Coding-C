#include <stdio.h>

int main() {
    int n, M[10][10], soma = 0;

    printf("Dimensão da matriz (n x n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
        soma += M[i][n - 1 - i];

    printf("Somatório da diagonal secundária = %d\n", soma);

    return 0;
}