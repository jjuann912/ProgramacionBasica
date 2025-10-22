#include <iostream>

int main() {
    double valores[] = {1.1, 2.2, 3.3};
    int length = sizeof(valores) / sizeof(valores[0]);
    std::cout << length;
    return 0;
}
