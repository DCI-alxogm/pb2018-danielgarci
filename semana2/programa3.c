/*este programa es el segundo ejercicio, en el se pedirá que introduzcas 4 numeros enteros y el programa debe imprimir a la pantalla 4 operaciones*/

#include<stdio.h>
/*se incluye la libreria stdio*/

int main()

{
	int a;
	int b;
	int c;
	int d;
	int e1;
	int e2;
	int e3;
	int e4;
	/*se declaran las variables que tiene que introducir el usuario y a las que se le va a asignar el resultado de las operaciones*/
	printf("Bienvenido, a continuación se te pedirá que introduzcas 4 valores y podras ver el resultado de 4 operaciones\n");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	scanf("%i",&d);
	/*en las lineas previas, es donde el programa escanea los valores introducidos por el usuario para posteriormente operarlos, para esto, cada escaneo es asignado a una de las variables previamente declaradas como integer, pues se requere operar con numeros naturales*/
	e1=(a+b)*c/d;
	e2=((a+b)*c/d);
	e3=(a+b)*c/d;
	e4=a+(b*c)/d;
	printf("El resultado de las operaciones es\n %i\n %i\n %i\n %i\n",e1,e2,e3,e4);
	printf("Gracias por habernos visitado, hasta pronto\n");

}

