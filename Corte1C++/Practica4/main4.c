#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a;
int b;
int r;

int main(int argc, char** argv) {
	
	a=8;
	b=25;
	r=a+b;
	
	std::cout << "El resultado de sumar " << a << " y " << b << " es: " << r << std::end;
	
	if(r == 40){
		printf("El resultado %d si es = 40", r);
	}
	else{
		if(r < 40){
			printf("el resultado %d si es < 40", r);
		}
		else{
		printf("El resultado no es = 40");
		}
	}
	return 0;
}
