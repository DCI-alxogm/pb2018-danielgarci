/*este programa es el segundo ejercicio, en el se pedirá que introduzcas 4 numeros enteros y el programa debe imprimir a la pantalla 4 operaciones*/

#include<stdio.h>
/*se incluye la libreria stdio*/

int main()

{
	float a;
	float b;
	float c;
	float d;
	float e1;
	float e2;
	float e3;
	float e4;
	/*se declaran las variables que tiene que introducir el usuario y a las que se le va a asignar el resultado de las operaciones*/
	printf("Bienvenido, a continuación se te pedirá que introduzcas 4 valores y podras ver el resultado de 4 operaciones\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	/*en las lineas previas, es donde el programa escanea los valores introducidos por el usuario para posteriormente operarlos, para esto, cada escaneo es asignado a una de las variables previamente declaradas como float, por que se requiere que opere con numeros reales*/
	e1=(a+b)*c/d;
	e2=((a+b)*c/d);
	e3=(a+b)*c/d;
	e4=a+(b*c)/d;
	printf("El resultado de las operaciones es\n %f\n %f\n %f\n %f\n",e1,e2,e3,e4);
	printf("Gracias por habernos visitado, hasta pronto\n");

}

