#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	printf("El programa que se está ejecutando es: %s\n",argv[0]);
	char *data;
	float Tin;
	float Tfin;
	int num;
	FILE* fp;
	if(argc==5)
		{
		Tin=atof(argv[1]);
		Tfin=atof(argv[2]);
		num=atoi(argv[3]);
		data=argv[4];
		printf("El nombre del archivo a abrir es: %s\n",data);
		fp=fopen("data.dat","w+");
		fprintf(fp,"Tin: %f,\t Tfin: %f, \t N: %i",Tin,Tfin,num);
		fclose(fp);

		}else if(argc>5)
			{
			printf("NON VALID ENTRANCE\n");
		}else{
			printf("4 arguments required: Tin,Tfin,num,nombre_archivo\n");
		}
		return 0;




}
