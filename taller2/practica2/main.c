#include <stdio.h>

int main() {
    char producto[50];
    int precio, unidades, total;

    printf("calcule el importe de una venta en el supermercado\n");

    printf("escriba el nombre del producto: ");
    scanf("%s", producto);

    printf("ingrese el precio por unidad: ");
    scanf("%d", &precio);

    printf("ingrese el numero de unidades: ");
    scanf("%d", &unidades);

    total = precio * unidades;

    printf("\nproducto: %s\n", producto);
    printf("unidades vendidas: %d\n", unidades);
    printf("precio total: %d\n", total);

    return 0;
}
