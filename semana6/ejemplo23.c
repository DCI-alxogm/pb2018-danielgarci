#include<stdio.h>


int main()

{	

	int n=10;
	int i;
	float numeros[10];
	/*en este caso se pide al usuario que introduzca los valores a asignar acada elemento, y a través de un ciclo for, los designa a cada elemento del arreglo*/	
	printf("Bienvenido, introduce los valores a asignar a cada elemento del arreglo\n");
	for(i=0;i<n;i++){
		scanf("%f\n",&numeros[i]);
			}
	for(i=0;i<n;i++){
		printf("%f\n",numeros[i]);
			}	
	return 0;
}
