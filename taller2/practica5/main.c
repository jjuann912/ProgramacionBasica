#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int apuesta;
    int moneda; // 0 = cruz, 1 = cara

    printf("juegue a doble o nada\n");

    printf("ingrese la cantidad que desea apostar: ");
    scanf("%d", &apuesta);

    srand(time(NULL)); // genera un numero aleatorio diferente cada vez
    moneda = rand() % 2; // genera 0 o 1

    if (moneda == 1) {
        printf("salio cara, ha ganado el doble!\n");
        printf("su premio es: %d\n", apuesta * 2);
    } else {
        printf("salio cruz, ha perdido todo.\n");
        printf("su premio es: 0\n");
    }

    printf("\nprograma finalizado\n");

    return 0;
}
