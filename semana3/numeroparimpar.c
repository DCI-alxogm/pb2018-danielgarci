/*creado el 23 de agosto por daniel garcia. En este  programa se observa un ejemplo del uso de la funcion if, con la cual podemos evaluar la condicion, en este caso particular, si un numero que introduce el usuario es par o impar*/



#include<stdio.h>



int main()

{

	int a;

		/*se establece la primera interfaz de interaccion con el usuario*/
		
		printf("Este programa te permite saber si un numero A que introduces es par o impar\n");
		printf("Introduce el numero a evaluar\n");
		scanf("%i",&a);
		
		/*se hace la declaracion de la funcion if y se establecen las condiciones con las que se va a evaluar*/
		if(a%2==0){
			printf("a=%i es par\n",a);

		}else{
			printf("a=%i es impar\n",a);

		}

		return 0;

}
