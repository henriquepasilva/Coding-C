#include <stdio.h>

// Fatorial Iterativo
int fatorial_iterativo(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Fatorial Recursivo
int fatorial_recursivo(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial_recursivo(n - 1);
}

int main() {
    int n;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &n);

    printf("Fatorial (iterativo): %d\n", fatorial_iterativo(n));
    printf("Fatorial (recursivo): %d\n", fatorial_recursivo(n));

    return 0;
}