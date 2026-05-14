#include <stdio.h>
#include <stdlib.h>

long primo(long num);

int main() {
    int i, num, num1, num2;

    printf("Inserir numero inteiro: ");
    scanf("%d", &num);

    if (primo(num) == 1)
        printf("\n%d: prime number", num);
    else
        printf("\n%d: not prime number", num);

    printf("\n\nInserir numero inteiro (limite inferior): ");
    scanf("%d", &num1);

    printf("Inserir numero inteiro (limite superior): ");
    scanf("%d", &num2);

    printf("\nNumeros primos no intervalo:\n");
    for (i = num1; i <= num2; i++) {
        if (primo(i) == 1)
            printf("%d\t", i);
    }

    printf("\n");
    return 0;
}

long primo(long num) {
    if (num < 2)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}