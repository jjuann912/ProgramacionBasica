#include <iostream>


int main(int argc, char** argv) {
	
	int numeros[5] = {10, 20, 30, 40, 50};
	int getArrayLength = sizeof(numeros) / sizeof(numeros[0]);
	std::cout << getArrayLength;
	
	return 0;
}	
