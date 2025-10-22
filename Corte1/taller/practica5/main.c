#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int apuesta;
    int moneda;
    char seguir[3];

    printf("bienvenido al juego doble o nada\n");
    printf("ingrese la cantidad que desea apostar: ");
    scanf("%d", &apuesta);

    srand(time(NULL)); // genera numeros aleatorios diferentes

    do {
        moneda = rand() % 2; // 0 = cruz, 1 = cara

        if (moneda == 1) {
            printf("salio cara, ha ganado el doble!\n");
            apuesta = apuesta * 2;
            printf("su nuevo monto es: %d\n", apuesta);

            printf("desea seguir jugando? (si / no): ");
            scanf("%s", seguir);
        } else {
            printf("salio cruz, ha perdido todo.\n");
            apuesta = 0;
            break;
        }

    } while (seguir[0] == 's' && seguir[1] == 'i');

    printf("\nfin del juego. su premio final es: %d\n", apuesta);

    return 0;
}
