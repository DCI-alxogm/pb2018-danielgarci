/*Creado el 23 de agosto por Daniel Garcia, este es el tercer ejemplo de la funcion if, en este se observa la funcion if, anidada*/

#include<stdio.h>

int main()

{
	int numero1,numero2;

	printf("Introduzca dos numero enteros:\n");
	scanf("%i",&numero1);
	scanf("%i",&numero2);
	/*a continuacion, se hace la declaracion de la funcion if, como se puede ver en la segunda sentencia, hay una funcion anidada*/
		if(numero1==numero2)
		{
			printf("Resultado: %i = %i",numero1,numero2);
		}
		else if (numero1>numero2)

		{
			printf("Resultado: %i > %i",numero1,numero2);

		}
		else 
		{
			printf("Resultado: %i < %i",numero1,numero2);

		}
		return 0;

}

