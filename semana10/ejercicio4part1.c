#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void res();
int main(int argc,char *argv[])
{

printf("El programa que se está ejecutando es : %s\n",argv[0]);
char *data;
int base;
int potencia;
FILE *fp;
if(argc==4)
	{

	base=atoi(argv[1]);
	potencia=atoi(argv[2]);
	data=argv[4];
	res();
	printf("El nombre del archivo a abrir es: %s\n",data);
	fp=fopen("file.dat","w+");
	fprintf(fp,"base: %i potencia: %i = %i",base,potencia,res);
	fclose(fp);
	
	}else if(argc>4)
		{
		
		printf("WARNING! interface not created\n");
	
	}else{
		printf("Not enough protocols\n");

		}

return 0;

}

