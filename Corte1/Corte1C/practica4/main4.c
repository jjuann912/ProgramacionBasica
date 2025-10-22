#include <stdio.h>
#include <stdlib.h>



int a, b, r;

int main(int argc, char *argv[]) {
	
	
	a=89;
	
	b=1;
	
	r=a+b;
	
	
	printf("El resultado de sumar %d y %d es: %d.\n", a, b, r);
	
	
	if(r==40){
		
		printf("El resultado %d si es igual a cuarenta.\n", r);
		
	}
	
	else{
		
		printf("El resultado %d NO es igual a cuarenta.\n", r); 
		
		if(r<40){
			
			printf("El resultado %d es menor que cuarenta.", r);
			
		}
		
		else{
			
			printf("El resultado %d es mayor que cuarenta.", r);
			
		}
		
	}
	
	
	
	return 0;
}
