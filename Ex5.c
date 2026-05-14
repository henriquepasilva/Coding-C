#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Número de linhas: ");
    scanf("%d", &linhas);
    printf("Número de colunas: ");
    scanf("%d", &colunas);

    if (linhas == colunas)
        printf("A matriz é quadrada.\n");
    else
        printf("A matriz não é quadrada.\n");

    return 0;
}