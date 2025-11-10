#include <stdio.h>

int main() {
    int N, i, j;
    printf("Ingrese la dimensión N de la matriz cuadrada: ");
    scanf("%d", &N);

    int matriz[N][N];
    int sumaPares = 0, sumaImpares = 0;
    int sumaPosPares = 0, sumaPosImpares = 0;
    int contPares = 0, contImpares = 0, contPosPares = 0, contPosImpares = 0;

    printf("Ingrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] % 2 == 0) {
                sumaPares += matriz[i][j];
                contPares++;
            } else {
                sumaImpares += matriz[i][j];
                contImpares++;
            }

            if ((i + j) % 2 == 0) {
                sumaPosPares += matriz[i][j];
                contPosPares++;
            } else {
                sumaPosImpares += matriz[i][j];
                contPosImpares++;
            }
        }
    }

    printf("\nSuma pares: %d, Media: %.2f", sumaPares, contPares ? (float)sumaPares / contPares : 0);
    printf("\nSuma impares: %d, Media: %.2f", sumaImpares, contImpares ? (float)sumaImpares / contImpares : 0);
    printf("\nSuma posiciones pares: %d, Media: %.2f", sumaPosPares, contPosPares ? (float)sumaPosPares / contPosPares : 0);
    printf("\nSuma posiciones impares: %d, Media: %.2f\n", sumaPosImpares, contPosImpares ? (float)sumaPosImpares / contPosImpares : 0);

    return 0;
}
