#include <stdio.h>

int main() {
    int numero, i, es_primo;

    printf("verifique si un numero es primo o no\n");
    printf("ingrese un numero: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        es_primo = 0; // 0, 1 y negativos NO son primos
    } else {
        es_primo = 1; // asumimos que es primo hasta probar lo contrario
        i = 2;
        while (i * i <= numero) { // basta probar hasta la raiz cuadrada
            if (numero % i == 0) {
                es_primo = 0; // encontramos un divisor -> no es primo
                break;
            }
            i++;
        }
    }

    if (es_primo == 1) {
        printf("el numero %d es primo\n", numero);
    } else {
        printf("el numero %d no es primo\n", numero);
    }

    printf("\nprograma finalizado\n");
    return 0;
}
