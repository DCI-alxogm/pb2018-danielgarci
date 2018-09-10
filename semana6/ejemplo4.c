#include<stdio.h>


int main()

{	
		
	int i;
	int n=10;
	
	float numeros[n];
	/*en este arreglo, se realiza una operacion sobre cada elemento del arreglo*/
	printf("Bienvenido,introduce los valores a asignar a cada elemento del arreglo, sobre los cuales deseas operar\n");
	for(i=0;i<n;i++){
		scanf("%f",&numeros[i]);
		numeros[i]*=2;
		printf("%f\n",numeros[i]);
			}	
	return 0;
}
