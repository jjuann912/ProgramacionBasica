#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int edades[] = {20, 22, 18, 35, 48, 26, 87, 70}; 
	int i;
	int length = sizeof(edades) / sizeof(edades[0]); 
	int MenorEdad = edades[0];
	for (i = 0; i < length; i++) {
  		if (MenorEdad > edades[i]) {
    		MenorEdad = edades[i];
  		}
	}	
	return 0;
	
}
