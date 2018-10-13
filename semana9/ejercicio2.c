#include<stdio.h>
#include<math.h>
#include<stdlib.h>


float cuadrado(float h);
float cubo();
void cuarta(float a);
void quinta();


int main()

{


	float x;
	float x2;
	printf("Introduce un número\n");
	scanf("%f",&x);
	x2=cuadrado(x);
	printf("El cuadrado de %f es %f\n",x,x2);

	float b;
	b=cubo();
	printf("El cubo es %f\n",b);
	
	
	float a;
	float aa;
	printf("Introduce un número\n");
	scanf("%f",&a);
	
	printf("La cuarta potencia de %f es\n",a);
	cuarta(a);
	
	quinta();
	
	return 0;



}
	
	float cuadrado(float h)
		{
		return h*h;
		}


	float cubo()
		{
		float y;
		float y2;
		printf("Introduce un número\n");
		scanf("%f",&y);
		y2=y*y*y;
		return y2;
		}
	void cuarta(float a)
		{
		float c;
		c=a*a*a*a;
		printf("%f\n",c);
		}

	
	void quinta()
		{

		float d;
		float e;
		printf("Introduce un número\n");
		scanf("%f",&d);
		e=d*d*d*d*d;
		printf("%f elevado a la 5ta potencia es %f\n",d,e);

	
		}














