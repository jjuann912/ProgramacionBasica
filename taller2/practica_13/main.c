#include <stdio.h>

int main() {
    int numero, suma = 0, cantidad = 0;
    float promedio;

    printf("calcule el promedio de una lista de numeros positivos\n");
    printf("para terminar, ingrese un numero negativo\n");

    while (1) {
        printf("ingrese un numero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break; // termina el ciclo cuando se ingresa un numero negativo
        }

        suma = suma + numero;
        cantidad++;
    }

    if (cantidad > 0) {
        promedio = (float)suma / cantidad;
        printf("\nel promedio es: %.2f\n", promedio);
    } else {
        printf("\nno se ingresaron numeros positivos\n");
    }

    printf("\nprograma finalizado\n");

    return 0;
}
