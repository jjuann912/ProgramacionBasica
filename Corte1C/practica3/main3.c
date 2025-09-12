
#include <stdio.h>
/* imprime la tabla Fahrenheit-Celsius
para fahr = 0, 20, ..., 300 */

main ()
{
	
	float fahr, celsius;
	float lower, upper, step;
	
	lower = 0;      /* limite inferior de la tabla de temperaturas */
	upper = 300;    /* limite superior */
	step = 20;      /*tama�o de incremento */
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0) ;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
		
	}
