#include <stdio.h>

int main() {
    char palabra1[] = "1234";
    char palabra2[] = "juan";
    int i;
    int tam1 = 0, tam2 = 0;

    for (i = 0; palabra1[i] != '\0'; i++) {
        tam1++;
    }
    
    for (i = 0; palabra2[i] != '\0'; i++) {
        tam2++;
    }

    if (tam1 == tam2) {
        printf("Son iguales\n");
    } else {
        printf("Son diferentes\n");
    }

    return 0;
}
