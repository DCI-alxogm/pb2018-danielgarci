/*Creado el 20 de agosto por Daniel Garcia este programa evalua 3 funciones en un valor para X que asigna el usuario e imprime el resultado*/

#include<stdio.h>
#include<math.h>

int main()


{
	float var;
	float r;
	int a;
	int b;
	int c;
	int r2;
	int r3;
/*se declaran las variables, en este caso la variable r, es donde se asignara el valor de la conversion a radianes*/
	printf("Este programa te calcula el valor de las funciones enlistadas para la variable X que tu introduces\n");
	printf("y=exp(-x)\n");
	printf("y=cos(x)+2tan(x/2)\n");
	printf("y=ln(x)+3x^2\n");
	printf("El programa opera las funciones trigonometricas en radianes, por lo que ṕrimero hacer la conversion a radianes y despues evalua las funciones\n");
	printf("Ingresa el valor a signar a la variable X\n");
	scanf("%f",&var);
	/*se escanea el valor a asignar a la variable x */
	r=var*((3.1416)/180);
	a=exp(-r);
	printf("y=exp(-x)= %f\n",a);
	
	return 0;
}

