#include <stdio.h>

int main() {
    char nombre[50];
    int horas, precio_hora;
    int sueldo_bruto, retencion, sueldo_neto;

    printf("calcule la nomina de un trabajador\n");

    printf("escriba el nombre del trabajador: ");
    scanf("%s", nombre);

    printf("ingrese las horas trabajadas: ");
    scanf("%d", &horas);

    printf("ingrese el precio que cobra por hora: ");
    scanf("%d", &precio_hora);

    sueldo_bruto = horas * precio_hora;
    retencion = (sueldo_bruto * 5) / 100;
    sueldo_neto = sueldo_bruto - retencion;

    printf("\nresultado:\n");
    printf("trabajador: %s\n", nombre);
    printf("sueldo bruto: %d\n", sueldo_bruto);
    printf("retencion (5%%): %d\n", retencion);
    printf("sueldo neto: %d\n", sueldo_neto);

    printf("\nprograma finalizado\n");

    return 0;
}
