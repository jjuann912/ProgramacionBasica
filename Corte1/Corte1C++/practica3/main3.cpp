#include <iostream> 
#include <iomanip>

using namespace std;

 /* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300; floating-point version */

 int main()
 {
 	cout << ("Fahr\tCelsius") << endl;
 	int fahr;
	float celsius;
 	float lower, upper, step;
 	
	lower = 0; 
 	upper = 300; 
 	step = 20; 
 	
	 fahr = lower;
 
	 while (fahr <= upper) {
	 celsius = (5.0/9.0) * (fahr-32.0);
	 cout << fahr << fixed << setprecision(3) <<  "\t" <<  celsius  << endl;
	 fahr = fahr + step;
 	}
}
 	
 
