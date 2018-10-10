#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void cuadrado(float x);/*no tiene argumento de salida, pero si de entrada*/

int main()

{


	float x;
	float xx;
	printf("Introduce el número a operar\n");
	scanf("%f",&x);
	
	
	printf("El cuadrado de %f\n",x);
	cuadrado(x);

}

	void cuadrado(float x)
		{
		float h;		
		h=x*x;
		printf("es %f\n",h);	
		}
