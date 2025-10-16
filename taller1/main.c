#include <stdio.h>

int main() {
    char s1[] = "Juan";
    char s2[] = "Juan";
    
    int iguales = 1;
    int i;

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            iguales = 0;
            break;
        }
    }

    if (iguales == 1) {
        printf("Los strings son iguales.\n");
    } else {
        printf("Los strings no son iguales.\n");
    }

    return 0;
}
