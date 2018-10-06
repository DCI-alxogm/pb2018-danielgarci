#include<stdio.h>
#include<stdlib.h>

int main()


{

	int num;
	int i;
	int *ptr;
	int sum=0;
	
	printf("Introduce el número de elementos\n");
	scanf("%d",&num);
	
	ptr=(int*)calloc(num,sizeof(int));
	if(ptr==NULL)
		{

		printf("Error, memoria no reservada\n");	
		exit(0);
	
		}
	printf("Introduce los elementos del arreglo\n");
	for(i=0;i<num;i++)
		{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
		
		}
	printf("sum=%d\n",sum);
	free(ptr);
	return 0;


}

