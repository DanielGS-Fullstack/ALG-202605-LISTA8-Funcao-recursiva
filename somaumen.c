#include <stdio.h>

int main() {
    int n, i;
    int soma = 0;

    printf("Digite um valor para N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        soma += i;
    }

    printf("Soma de 1 ate %d = %d\n", n, soma);

    return 0;
}
