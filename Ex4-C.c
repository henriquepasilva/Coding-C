#include <stdio.h>

int fibonacci_iterativo(int n) {
    int a = 0, b = 1, c;
    if (n == 0)
        return 0;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void serie_fibonacci(int inicio, int fim) {
    for (int i = inicio; i <= fim; i++) {
        printf("%d ", fibonacci_iterativo(i));
    }
    printf("\n");
}

int main() {
    int inicio;
    printf("Introduza o intervalo da série de Fibonacci (início): ");
    scanf("%d", &inicio);

    int fim;
    printf("Introduza o intervalo da série de Fibonacci (fim): ");
    scanf("%d", &fim);

    printf("Série de Fibonacci de %d a %d:\n", inicio, fim);
    serie_fibonacci(inicio, fim);

    return 0;
}