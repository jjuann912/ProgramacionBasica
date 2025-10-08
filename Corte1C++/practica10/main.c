#include <iostream>

int main() {
    int myNumbers[] = {10, 25, 50, 75, 100};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    std::cout << length;
    return 0;
}
