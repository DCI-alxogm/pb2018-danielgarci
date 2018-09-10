#include<stdio.h>


int main()

{

	int i,j,n;
	printf("Introduce el número de elementos a almacenar\n");
	scanf("%i",&n);
	float numeros[n];
	/*el escaneo anterior hace una reserva dinámica de memoria*/
	
	for(j=0;j<n;j++){
		scanf("%f",&numeros[j]);
		numeros[j]*=2;
		printf("%f\n",numeros[j]);
			}
	return 0;
}
