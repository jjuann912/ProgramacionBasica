#include <stdio.h>  //pares

int main() {
    int N, M, i, j, pares = 0;

    printf("Ingrese el número de filas (N): ");
    scanf("%d", &N);
    printf("Ingrese el número de columnas (M): ");
    scanf("%d", &M);

    int matriz[N][M];

    printf("Ingrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] % 2 == 0) pares++;
        }
    }

    printf("\nLa matriz tiene %d números pares.\n", pares);
    return 0;
}
