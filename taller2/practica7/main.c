#include <stdio.h>

int main() {
    float nota;

    printf("calcule su calificacion segun la nota del examen\n");

    printf("ingrese su nota (entre 0 y 10): ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("la nota ingresada no es valida\n");
    } else if (nota < 5) {
        printf("calificacion: suspenso\n");
    } else if (nota >= 5 && nota < 7) {
        printf("calificacion: aprobado\n");
    } else if (nota >= 7 && nota < 9) {
        printf("calificacion: notable\n");
    } else if (nota >= 9 && nota < 10) {
        printf("calificacion: sobresaliente\n");
    } else if (nota == 10) {
        printf("calificacion: matricula de honor\n");
    }

    printf("\nprograma finalizado\n");

    return 0;
}
