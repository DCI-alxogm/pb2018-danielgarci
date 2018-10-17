#include<stdio.h>


int main(int argc,char *argv[])
{
	printf("El programa que se está ejecutando es:\n",argv[0]);
	char *nombre_archivo;
	FILE*fp;
	if(argc==2)
		{
		nombre_archivo=argv[1];
		printf("El nombre del archivo a abrir es:\n",nombre_archivo);
		fp=fopen("nombre_archivo","w+");
		fclose(fp);

		}else if(argc>2)
		{
			printf("Mas argumentos de los necesarios\n");
		}else{
	
			printf("ERROR! non valid argument\n");
		}
		return 0;
}

