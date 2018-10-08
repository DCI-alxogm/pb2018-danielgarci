#include<stdio.h>
#include<stdlib.h>


int main()


{

	FILE *data;
	int k=95;
	float n[95];
	int i;

		
	
	data=fopen("num_maximo.txt","r");
	for(i=0;i<k;i++)
		{
		n[i]=0;
		}

	for(i=0;i<k;i++)
		{
		fscanf(data,"%f\n",&n[i]);
		printf("%f\n",n[i]);
		}

	return 0;

}

