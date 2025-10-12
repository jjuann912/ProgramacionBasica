#include <stdio.h>
#include <string.h>

int main() {
    char opcion;
    int lado, base, altura, radio;
    int a, b, c;
    int area, perimetro;
    char seguir[3];

    strcpy(seguir, "si");

    while (strcmp(seguir, "si") == 0 || strcmp(seguir, "SI") == 0) {
        printf("\ncalcule el area y el perimetro de una figura\n");
        printf("seleccione la figura que desea calcular:\n");
        printf("a. cuadrado\n");
        printf("b. rectangulo\n");
        printf("c. triangulo\n");
        printf("d. circulo\n");
        printf("opcion: ");
        scanf(" %c", &opcion);

        if (opcion == 'a') {
            printf("ingrese el valor del lado: ");
            scanf("%d", &lado);
            area = lado * lado;
            perimetro = 4 * lado;
            printf("\nresultado:\n");
            printf("area = %d\n", area);
            printf("perimetro = %d\n", perimetro);
        }
        else if (opcion == 'b') {
            printf("ingrese el valor de la base: ");
            scanf("%d", &base);
            printf("ingrese el valor de la altura: ");
            scanf("%d", &altura);
            area = base * altura;
            perimetro = 2 * (base + altura);
            printf("\nresultado:\n");
            printf("area = %d\n", area);
            printf("perimetro = %d\n", perimetro);
        }
        else if (opcion == 'c') {
            printf("ingrese la base: ");
            scanf("%d", &base);
            printf("ingrese la altura: ");
            scanf("%d", &altura);
            printf("ingrese los tres lados del triangulo (ejemplo: 3 4 5): ");
            scanf("%d %d %d", &a, &b, &c);
            area = (base * altura) / 2;
            perimetro = a + b + c;
            printf("\nresultado:\n");
            printf("area = %d\n", area);
            printf("perimetro = %d\n", perimetro);
        }
        else if (opcion == 'd') {
            printf("ingrese el radio: ");
            scanf("%d", &radio);
            area = (int)(3.14 * radio * radio + 0.5);
            perimetro = (int)(2 * 3.14 * radio + 0.5);
            printf("\nresultado:\n");
            printf("area = %d\n", area);
            printf("perimetro = %d\n", perimetro);
        }
        else {
            printf("opcion no valida\n");
        }

        printf("\ndesea calcular otra figura? (si/no): ");
        scanf("%s", seguir);
    }

    printf("\nprograma finalizado\n");
    return 0;
}
