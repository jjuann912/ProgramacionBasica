#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int numeros[] = {25, 50, 75, 100};
	numeros[0] = 33;
	printf("%d", numeros[0]);
	
	return 0;
}
