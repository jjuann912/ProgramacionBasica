#include <stdio.h>
#include <string.h> // para comparar palabras con strcmp

int main() {
    char opcion;
    int lado, base, altura, radio;
    int a, b, c;
    int area, perimetro;
    char seguir[3]; // para guardar "si" o "no"

    strcpy(seguir, "si"); // empezar en "si" para entrar al while

    while(strcmp(seguir, "si") == 0 || strcmp(seguir, "SI") == 0) {
        printf("\ncalcular area y perimetro de una figura\n");
        printf("escoja la figura que desea calcular:\n");
        printf("a. cuadrado\n");
        printf("b. rectangulo\n");
        printf("c. triangulo\n");
        printf("d. circulo\n");
        printf("opcion: ");
        scanf(" %c", &opcion);

        if(opcion == 'a') {
            printf("ingrese el lado: ");
            scanf("%d", &lado);
            area = lado * lado;
            perimetro = 4 * lado;
            printf("area = %d\n", area);
            printf("perimetro = %d\n", perimetro);
        }
        else if(opcion == 'b') {
            printf("ingrese la base: ");
            scanf("%d", &base);
            printf("ingrese la altura: ");
            scanf("%d", &altura);
            area = base * altura;
            perimetro = 2 * (base + altura);
            printf("area = %d\n", area);
            printf("perimetro = %d\n", perimetro);
        }
        else if(opcion == 'c') {
            printf("ingrese la base: ");
            scanf("%d", &base);
            printf("ingrese la altura: ");
            scanf("%d", &altura);
            printf("ingrese los tres lados: ");
            scanf("%d %d %d", &a, &b, &c);
            area = (base * altura) / 2;
            perimetro = a + b + c;
            printf("area = %d\n", area);
            printf("perimetro = %d\n", perimetro);
        }
        else if(opcion == 'd') {
            printf("ingrese el radio: ");
            scanf("%d", &radio);
            area = 3.14 * radio * radio;
            perimetro = 2 * 3.14 * radio;
            printf("area = %d\n", area);
            printf("perimetro = %d\n", perimetro);
        }
        else {
            printf("opcion no valida\n");
        }

        printf("\ndesea calcular otra figura? (si/no): ");
        scanf("%s", seguir);
    }

    printf("fin del programa\n");
    return 0;
}
