#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float cuadrado(float h);

int main()

{

	float x;
	float x2;
	printf("Introduce un número\n",x);
	scanf("%f",&x);
	x2=cuadrado(x);
	printf("El cuadrado de %f es %f\n",x,x2);
	return 0;

}

		float cuadrado(float h)/*la funcion tiene argumentos de entrada y de salida, regresa un valor*/
			{
			return h*h;				
			}
