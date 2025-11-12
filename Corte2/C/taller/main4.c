#include <stdio.h> //maxfilaarreglo

int main() {
    int N, i, j;
    printf("Ingrese la dimensión N de la matriz cuadrada: ");
    scanf("%d", &N);

    int matriz[N][N], maxFila[N];
    int sumaMax = 0;

    printf("Ingrese los elementos:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        int max = matriz[i][0];
        for (j = 1; j < N; j++) {
            if (matriz[i][j] > max)
                max = matriz[i][j];
        }
        maxFila[i] = max;
        sumaMax += max;
    }

    printf("\nMáximos por fila:\n");
    for (i = 0; i < N; i++)
        printf("Fila %d: %d\n", i + 1, maxFila[i]);

    printf("Media de los máximos: %.2f\n", (float)sumaMax / N);
    return 0;
}
