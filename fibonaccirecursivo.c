#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci:\n");

    for(i = 1; i <= n; i++) {
        printf("%d ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    return 0;
}
