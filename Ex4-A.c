#include <stdio.h>

int fibonacci_recursivo(int n) {
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else 
        return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
}

int main () {
    int n;
    printf("Introduza um número para calcular o Fibonacci recursivo: ");
    scanf("%d", &n);

    printf("Fibonacci recursivo: %d\n", fibonacci_recursivo(n));

    return 0;

}