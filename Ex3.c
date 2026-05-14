#include <stdio.h>

int mdc_recursivo(int a, int b) {
    if (b == 0)
        return a;
    else
        return mdc_recursivo(b, a % b);
}

int main() {
    int a, b;
    printf("Digite dois números para calcular o MDC (recursivo): ");
    scanf("%d %d", &a, &b);

    printf("MDC (recursivo): %d\n", mdc_recursivo(a, b));

    return 0;
}