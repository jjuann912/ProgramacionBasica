#include <stdio.h> //filasycolumnas

int main() {
    int N, M, i, j;
    printf("Ingrese filas (N): ");
    scanf("%d", &N);
    printf("Ingrese columnas (M): ");
    scanf("%d", &M);

    float matriz[N][M], sumaFila[N], sumaCol[M];
    for (i = 0; i < N; i++) sumaFila[i] = 0;
    for (j = 0; j < M; j++) sumaCol[j] = 0;

    printf("Ingrese los elementos:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
            sumaFila[i] += matriz[i][j];
            sumaCol[j] += matriz[i][j];
        }
    }

    printf("\nMatriz con sumas:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            printf("%.2f\t", matriz[i][j]);
        printf("= %.2f\n", sumaFila[i]);
    }

    for (j = 0; j < M; j++)
        printf("%.2f\t", sumaCol[j]);
    printf("\n");

    return 0;
}
