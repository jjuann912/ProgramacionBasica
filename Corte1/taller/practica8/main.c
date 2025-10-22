#include <stdio.h>

int main() {
    int año;

    printf("verifique si un año es bisiesto o no\n");

    printf("ingrese el año: ");
    scanf("%d", &año);

    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        printf("el año %d es bisiesto\n", año);
    } else {
        printf("el año %d no es bisiesto\n", año);
    }

    printf("\nprograma finalizado\n");

    return 0;
}
