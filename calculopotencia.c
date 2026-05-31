#include <stdio.h>

int main() {
    int base, expoente, i;
    int resultado = 1;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    for(i = 1; i <= expoente; i++) {
        resultado *= base;
    }

    printf("%d elevado a %d = %d\n", base, expoente, resultado);

    return 0;
}
