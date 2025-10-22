#include <stdio.h>

int main() {
    int num1, num2;

    printf("compare dos numeros y vea cual es mayor\n");

    printf("ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("el mayor es: %d\n", num1);
    } else if (num2 > num1) {
        printf("el mayor es: %d\n", num2);
    } else {
        printf("los dos numeros son iguales\n");
    }

    printf("\nprograma finalizado\n");

    return 0;
}
