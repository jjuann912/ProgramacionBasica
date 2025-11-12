#include <stdio.h> //max,min,promedio

int main() {
    int N, M, i, j;
    printf("Ingrese número de filas (N): ");
    scanf("%d", &N);
    printf("Ingrese número de columnas (M): ");
    scanf("%d", &M);

    int matriz[N][M];
    int max, min, suma = 0, total = N * M;

    printf("Ingrese los elementos:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == 0 && j == 0) {
                max = min = matriz[i][j];
            } else {
                if (matriz[i][j] > max) max = matriz[i][j];
                if (matriz[i][j] < min) min = matriz[i][j];
            }
            suma += matriz[i][j];
        }
    }

    printf("\nMáximo: %d\nMínimo: %d\nMedia: %.2f\n", max, min, (float)suma / total);
    return 0;
}
