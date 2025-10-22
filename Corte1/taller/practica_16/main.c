#include <stdio.h>

int main() {
    int n, m, i, contador = 0;

    printf("muestre tres numeros pares entre dos valores dados\n");

    printf("ingrese el primer numero (N): ");
    scanf("%d", &n);

    printf("ingrese el segundo numero (M): ");
    scanf("%d", &m);

    if (n >= m) {
        printf("el primer numero debe ser menor que el segundo\n");
    } else {
        for (i = n + 1; i < m; i++) {
            if (i % 2 == 0) {
                printf("%d\n", i);
                contador++;
            }

            if (contador == 3) {
                break;
            }
        }

        if (contador < 3) {
            printf("no hay tres numeros pares entre los valores ingresados\n");
        }
    }

    printf("\nprograma finalizado\n");

    return 0;
}
