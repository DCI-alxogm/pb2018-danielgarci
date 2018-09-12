#include<stdio.h>


int main()


{

	FILE *archivo;
	float var1,var2;
	char var[255];
	/*para escribir un archivo, primero se declara la variable de creación del arcvhivo*/
	archivo=fopen("test.txt","w");
	fputs("Esta es una prueba de fputs\n",archivo);
	fprintf(archivo,"fprint...\n");
	var1=0.55;
	var2=1.08;
	fprintf(archivo,"%f %f\n",var1,var2);
	fclose(archivo);
}
