#include <stdio.h>

int main() {
    int numero, positivos = 0, negativos = 0;

    printf("conte cuantos numeros son positivos y cuantos son negativos\n");
    printf("para terminar, ingrese el numero 0\n");

    while (1) {
        printf("ingrese un numero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // termina cuando el usuario ingresa 0
        } else if (numero > 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    printf("\nresultado:\n");
    printf("numeros positivos: %d\n", positivos);
    printf("numeros negativos: %d\n", negativos);

    printf("\nprograma finalizado\n");

    return 0;
}
