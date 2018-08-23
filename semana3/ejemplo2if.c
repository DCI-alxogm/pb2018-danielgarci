/*creado el 23 de agosto por Daniel Garcia.Este es el segundo ejemplo de la funcion if, que evalua con la funcion modulo %= si un numero es par, si lo es, lo imprime, si no lo es, le suma una unidad y lo convierte en par, por lo que siempre arrojara un numero par*/

#include<stdio.h>


int main()

{

	int a;


	printf("Este programa evalua cualquier numero positivo que introducas y lo evalua, si es par, así te lo indicará la interfaz, si no lo es, lo convertirá en par y te mostrará el resultado\n");
	printf("Introduce el número a evaluar\n");
	scanf("%i",&a);
	if(a%2==0){
		printf("El número que has introducido a=%i es par\n",a);
	}else{
		a=a+1;
		printf("El numero que introdujiste es impar y se le ha sumado la unidad, el resultado es: A=%i\n",a);
	}
	return 0;

}

