#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, intento, intentos = 0;

    printf("juegue a adivinar un numero entre 1 y 10\n");

    srand(time(NULL)); // genera un numero aleatorio distinto cada vez
    numero_secreto = (rand() % 10) + 1; // genera un numero entre 1 y 10

    do {
        printf("ingrese su intento: ");
        scanf("%d", &intento);
        intentos++;

        if (intento < numero_secreto) {
            printf("el numero secreto es mayor\n");
        } else if (intento > numero_secreto) {
            printf("el numero secreto es menor\n");
        } else {
            printf("felicidades, ha acertado!\n");
            printf("numero de intentos: %d\n", intentos);
        }

    } while (intento != numero_secreto);

    printf("\nprograma finalizado\n");

    return 0;
}
