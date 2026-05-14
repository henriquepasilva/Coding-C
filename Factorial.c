#include <stdio.h>

long factorial(int num) {
    long resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;

    printf("Inserir numero inteiro: ");
    scanf("%d", &num);

    long f = factorial(num);
    printf("Fatorial de %d = %ld\n", num, f);

    return 0;
}