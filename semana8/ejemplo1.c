#include<stdio.h>
#include<stdlib.h>


int main()


{

	int var=20;
	int *ptr;
	ptr=&var;
	

	printf("La dirección de la variable var es: %x\n", (int) &var);
	printf("La dirección guardada en el apuntador ptr es: %x\n", (int) &var);
	printf("El valor guardado en la dirección a la que apunta el apuntador es: %d\n",*ptr);
	return 0;


}


