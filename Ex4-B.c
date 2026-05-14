#include <stdio.h>

int fibonacci_iterativo(int n) {
    int a = 0, b = 1, c;
    if (n==0)
        return 0;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Introduza um número para calcular o Fibonacci iterativo: ");
    scanf("%d", &n);
    
    printf("Fibonacci iterativo: %d\n", fibonacci_iterativo(n));

    return 0;
}