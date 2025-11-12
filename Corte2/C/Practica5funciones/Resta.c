#include <stdio.h>

int ingresarValor() {
    int valor;
    printf("Ingresa un número: ");
    scanf("%d", &valor);
    return valor;
}

int restar(int a, int b) {
    int r = a - b;
    return r;
}

void mostrarResultado(int r) {
    printf("Resultado: %d\n", r);
}

int main() {
    int operando1;
    int operando2;
    int resultado;
    
    printf("=== RESTA ===\n");
    operando1 = ingresarValor();
    operando2 = ingresarValor();
    
    resultado = restar(operando1, operando2);
    mostrarResultado(resultado);
    
    return 0;
}
