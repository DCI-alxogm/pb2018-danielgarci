#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void cuadrado();

int main()

{

	cuadrado();
	return 0;

}


	void cuadrado()/*la función no tiene argumentos de entrada ni de salida, no regresa ningún valor*/
		{
		float x;
		float x2;
		
		printf("Introduce un número\n");
		scanf("%f",&x);
		
		x2=x*x;
		printf("El cuadrado de %f es %f\n",x,x2);

		
		
		}
