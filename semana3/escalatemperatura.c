/*Creado el 20 de agosto por Daniel Garcia, este programa es una calculadora que primero convierte grados celsius a fahrenheit y después realiza la operacion inversa*/

#include<stdio.h>

int main()
{
	int celsius;
	int fahrenheit;

	/*se declaran las variables, que en este caso solo son dos, las temperatura a calcular que son las mismas con las que vamos a operar*/

	printf("Bienvenido, esta calculadora te permite hacer una conversión de grados celsius a fahrenheit y de fahrenheit a celsius\n");
	printf("Ingresa la temperatura en grados celsius\n");
	scanf("%i",&celsius);
	/*se escanea la variable con la que vamos a operar*/
	fahrenheit=((celsius*1.8)+32);
	/*se efectua la operacion*/
	printf("La temperatura en fahrenheit es %i\n",fahrenheit);
	/*se imprime el resultado de la operacion*/
	printf("Ahora vamos a hacer la conversion de fahrenheit a celsius\n");
	printf("Ingresa la temperatura en celsius\n");
	scanf("%i",&fahrenheit);
	/*en este caso, se hace una redefinicion de las variables que ya habian sido declaradas, y se escanea de nuevo el valor con el que se va a operar*/
	celsius=((fahrenheit-32)/1.8);
	/*se realiza la operacion*/
	printf("La temperatura en fahrenheit es %i\n",celsius);
	/*se imprime el resultado de la operacion*/
	return 0;
}
