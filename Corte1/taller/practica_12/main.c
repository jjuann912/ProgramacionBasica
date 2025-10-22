#include <stdio.h>

int main() {
    int numero, i;

    printf("muestre la tabla de multiplicar de un numero\n");

    printf("ingrese un numero: ");
    scanf("%d", &numero);

    printf("\ntabla de multiplicar del %d:\n", numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    printf("\nprograma finalizado\n");

    return 0;
}
