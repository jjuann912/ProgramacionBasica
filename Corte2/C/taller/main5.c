#include <stdio.h> //maxfilavector

int main() {
    int N, i, j;
    printf("Ingrese la dimensión N de la matriz cuadrada: ");
    scanf("%d", &N);

    int matriz[N][N], vector[N];

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
        vector[i] = max;
    }

    printf("\nVector con máximos por fila:\n");
    for (i = 0; i < N; i++)
        printf("%d ", vector[i]);
    printf("\n");

    return 0;
}
