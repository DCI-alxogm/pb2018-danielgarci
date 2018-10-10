#include<stdio.h>
#include<stdlib.h>
#include<math.h>
	
int main()

{
	
	int i;
	FILE *data;
	int tamano_mem;
	char cont[255];
	float num_lineas;
	
	data=fopen("num_maximo.txt","r");
	num_lineas=0;
	for(i=0;fgets(cont,255,(FILE*)data)!=NULL;i++)
		{
		num_lineas++;
		}
	printf("%f\n",num_lineas);
	fclose(data);
	float *ptr;
	
	ptr=(float*)calloc(num_lineas,sizeof(float*));/*reserva de memoria dinámica */
	if(ptr==NULL)
		{
		printf("FATAL ERROR\n");
		exit(0);
		}
	for(i=0;i<num_lineas;i++);
		{
		fscanf(data,"%f\n",ptr+i);
		
	
		}
	return 0;
	
}
