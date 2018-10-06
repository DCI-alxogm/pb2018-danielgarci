#include<stdio.h>
#include<stdlib.h>
	

int main()

{

	int *ptr;
	int i;
	int n1;
	int n2;
	
	printf("Introduce el número de elementos n1\n");
	scanf("%d\n",&n1);
	
	printf("Introduce el nuevo número de elementos n2\n");
	scanf("%d\n",&n2);
	
	ptr=(int*)malloc(n1*sizeof(int));
	
	printf("Dirección de la memoria reservada\n");
	
	for(i=0;i<n1;i++)
		{
		printf("%x\t",ptr+i);
		}
	ptr=realloc(ptr,n2);
	
	for(i=0;i<n2;i++)
		{
		printf("%u\t",ptr+1);
	
		}
	free(ptr);
	return 0;
	

}


