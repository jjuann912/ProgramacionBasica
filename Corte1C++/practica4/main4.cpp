#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

     int a, b, r; 

int main(int argc, char *argv) {
  
   a=20;
   b=25;
   r=a+b;
   
   std::cout << "El resultado de sumar " << a << " y " << b << " es: " << a << b << r << std::endl; 

   if (r == 40) {
    printf("El resultado es igual a 40");
   	}
   	else {
   		if(r < 40){
   			printf("El resultado %d si es menor que 40", r);
		}  
		else{
    	printf("El resultado %d si es mayor a 40 \n", r);
		}
		
   return 0;
	}   	
    
}

