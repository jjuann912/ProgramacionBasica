#include <stdio.h>
#include <string.h>

int main() {
    char contrasena[20];
    int intentos = 0;
    char correcta[] = "clave123";

    printf("verificacion de contraseña (tiene tres intentos)\n");

    while (intentos < 3) {
        printf("ingrese la contraseña: ");
        scanf("%s", contrasena);

        if (strcmp(contrasena, correcta) == 0) {
            printf("contraseña correcta\n");
            return 0;
        } else {
            printf("lo siento, contraseña equivocada\n");
            intentos++;
        }
    }

    printf("\nha superado el numero de intentos permitidos\n");
    printf("programa finalizado\n");

    return 0;
}
