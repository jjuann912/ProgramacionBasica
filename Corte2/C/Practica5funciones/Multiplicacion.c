#include <stdio.h>

int ingresarValor() {
    int valor;
    printf("Ingresa un número: ");
    scanf("%d", &valor);
    return valor;
}

float dividir(int a, int b) {
    if(b == 0) {
        printf("Error: No se puede dividir entre cero\n");
        return 0;
    }
    float r = (float)a / b;
    return r;
}

void mostrarResultado(float r) {
    printf("Resultado: %.2f\n", r);
}

int main() {
    int operando1;
    int operando2;
    float resultado;
    
    printf("=== DIVISIÓN ===\n");
    operando1 = ingresarValor();
    operando2 = ingresarValor();
    
    resultado = dividir(operando1, operando2);
    if(operando2 != 0) {
        mostrarResultado(resultado);
    }
    
    return 0;
}
