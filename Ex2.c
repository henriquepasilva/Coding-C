#include <stdio.h>

int mdc_iterativo(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Digite dois números para calcular o MDC (iterativo): ");
    scanf("%d %d", &a, &b);

    printf("MDC (iterativo): %d\n", mdc_iterativo(a, b));

    return 0;
}