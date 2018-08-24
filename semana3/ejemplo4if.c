/*Creado por Daniel Garcia el 24 de agosto de 2018
 *
 *
 * este programa es parte de la practica de la semana, correspondiente al uso de la funcion if*/

#include<stdio.h>


int main()

{

	char c;
	int es_vocalminuscula; 
	int es_vocalmayuscula;

	/*se hace la declaracion de variables a utilizar*/

	printf("Introduce una letra:\n");
	scanf("%c",&c);

	es_vocalminuscula=( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );
	es_vocalmayuscula=( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' );

	if(es_vocalmayuscula || es_vocalminuscula){
		printf("%c, es una vocal\n",c);
	

	}else{
		printf("%c, es una consonante\n",c);

	}
	return 0;

}
