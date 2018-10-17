#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])

{

	printf("El programa que se está ejecutando es: %s\n",argv[0]);
	char *data;
	float beg;
	float end;
	int it;
	FILE* suport;
	if(argc==5)
		{
		beg=atof(argv[1]);
		end=atof(argv[2]);
		it=atoi(argv[3]);
		data=argv[4];
		float delta;
		float x;
		int i;
		printf("El nombre del registro es: %s\n",data);
		suport=fopen("interface.dat","w+");
		delta=(end-beg)/it;
		for(i<0;i<end;i++)
			{
			fprintf(suport,"%f\n",x);
			x+=delta;
			}
		fclose(suport);
		}else if(argc>5)
			{
			printf("Interface not created\n");
		}else{
			printf("Interface not created, protocol not valid\n");
		}
	return 0;
}

