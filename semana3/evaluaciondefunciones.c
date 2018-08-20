/*Creado el 20 de agosto por Daniel Garcia este programa evalua 3 funciones en un valor para X que asigna el usuario e imprime el resultado*/

#include<stdio.h>
#include<math.h>

int main()


{
	float x,y,z,w,t;
/*se declaran las variables, en este caso la variable r, es donde se asignara el valor de la conversion a radianes*/
	printf("Este programa te calcula el valor de las funciones enlistadas para la variable X que tu introduces\n");
	printf("y=exp(-x)\n");
	printf("y=cos(x)+2tan(x/2)\n");
	printf("y=ln(x)+3x^2\n");
	printf("El programa opera las funciones trigonometricas en radianes, por lo que ṕrimero hacer la conversion a radianes y despues evalua las funciones\n");
	printf("Ingresa el valor a signar a la variable X\n");
	scanf("%f",&x);
	/*se escanea el valor a asignar a la variable x */
	t=x*((3.141159265)/180);
	y=exp(-x);
	printf("y=exp(-x)= %f\n",y);
	z=cos(x)+(2*(tan(x/2)));
	printf("y=cos(x)+2tan(x/2)= %f\n",z);
	w=log(x)+(3*pow(x,2));
	printf("y=ln(x)+3x^2= %f\n",w);
	return 0;
}

