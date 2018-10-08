#include<stdio.h>
#include<stdlib.h>
	

int main()


{

	FILE *data;
	int num_lineas;
	char cont[255];
	int i;
	
	data=fopen("num_maximo.txt","r");
	num_lineas=0;
	for(i=0;fgets(cont,255,(FILE*)data)!=NULL;i++)
		{
		num_lineas++;
		}
	fclose(data);
	printf("%d\n",num_lineas);

	return 0;

}
