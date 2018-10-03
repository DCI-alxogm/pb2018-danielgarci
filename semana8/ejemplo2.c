#include<stdio.h>
#include<stdlib.h>


int main ()

{

	int max=3;
	int var[]={10,100,200};
	int i;
	int *ptr;
	
	ptr=&var;
	
	for(i=0;i<max;i++)
		{
			printf("La dirección de la variable var[%d]=es: %x\n",i,ptr);
			printf("El valor' de la variable var[%d] guardado en el apuntador ptr es: %d\n",i,*ptr);
			ptr++;/*esta operación NO ES SOBRE EL VALOR GUARDADO EN LA VARIABLE, ES UN DESPLAZAMIENTO EN LA MEMORIA*/
			
		}
	return 0;
}

