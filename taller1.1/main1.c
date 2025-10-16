#include <stdio.h>

int main() {
    int array1[] = {10, 25, 50, 75, 100};
    int lon1 = sizeof(array1) / sizeof(array1[0]);
    
    int array2[] = {10, 25, 50, 75, 100};
    int lon2 = sizeof(array2) / sizeof(array2[0]);
    
    int equi = 1;
    int i;

    for (i = 0; i < lon1 && i < lon2; i++) {
        if (array1[i] != array2[i]) {
            equi = 0;
            break;
        }
    }

    if (lon1 != lon2)
        equi = 0;

    if (equi == 1) {
        printf("Los arreglos son iguales.\n");
    } else {
        printf("Los arreglos no son iguales.\n");
    }

    return 0;
}
