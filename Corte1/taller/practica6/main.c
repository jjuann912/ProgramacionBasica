#include <stdio.h>

int main() {
    int num1, num2, num3;
    int maximo, minimo;

    printf("este programa muestra el numero mayor y el menor de tres valores\n");

    printf("ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("ingrese el tercer numero: ");
    scanf("%d", &num3);

    // asumimos que el primero es el mayor y el menor al principio
    maximo = num1;
    minimo = num1;

    if (num2 > maximo) {
        maximo = num2;
    }
    if (num3 > maximo) {
        maximo = num3;
    }

    if (num2 < minimo) {
        minimo = num2;
    }
    if (num3 < minimo) {
        minimo = num3;
    }

    printf("\nel numero mayor es: %d\n", maximo);
    printf("el numero menor es: %d\n", minimo);

    printf("\nprograma finalizado\n");

    return 0;
}
