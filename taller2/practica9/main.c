#include <stdio.h>

int main() {
    int dia, mes;

    printf("descubra su signo zodiacal\n");

    printf("ingrese el dia de nacimiento: ");
    scanf("%d", &dia);

    printf("ingrese el mes de nacimiento (en numero, por ejemplo 3 para marzo): ");
    scanf("%d", &mes);

    if ((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4)) {
        printf("su signo es aries\n");
    } else if ((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5)) {
        printf("su signo es tauro\n");
    } else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)) {
        printf("su signo es geminis\n");
    } else if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7)) {
        printf("su signo es cancer\n");
    } else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8)) {
        printf("su signo es leo\n");
    } else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)) {
        printf("su signo es virgo\n");
    } else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)) {
        printf("su signo es libra\n");
    } else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)) {
        printf("su signo es escorpio\n");
    } else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)) {
        printf("su signo es sagitario\n");
    } else if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1)) {
        printf("su signo es capricornio\n");
    } else if ((dia >= 20 && mes == 1) || (dia <= 18 && mes == 2)) {
        printf("su signo es acuario\n");
    } else if ((dia >= 19 && mes == 2) || (dia <= 20 && mes == 3)) {
        printf("su signo es piscis\n");
    } else {
        printf("fecha no valida, verifique los datos\n");
    }

    printf("\nprograma finalizado\n");

    return 0;
}
