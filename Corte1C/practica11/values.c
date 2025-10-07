#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	double valores[] = {1.1, 2.2, 3.3};
	int length = sizeof(valores) / sizeof(valores[0]);
	printf("%d", length);
	return 0;
}
