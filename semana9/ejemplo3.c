#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float cuadrado();/*la función tiene argumento de salida pero no de entrada*/

int main()

{
	
	float h;
	h=cuadrado();
	printf("El cuadrado es %f\n",h);
}


	float cuadrado()
		{
		
		float x;
		float x2;
		printf("Introduce un número\n");
		scanf("%f",&x);
		x2=x*x;

		return x2;/*argumento de salida de la función*/
		
		}
