#include<stdio.h>
#include<stdlib.h>
#include<math.h>	

int main()


{

	FILE *data;
	int num_lineas;
	char cont[255];
	int i;
	
	data=fopen("promedio.txt","r");
	num_lineas=0;
	for(i=0;fgets(cont,255,(FILE*)data)!=NULL;i++)
		{
		num_lineas++;
		}
	fclose(data);
	/*printf("%d\n",num_lineas);*/
	

	float prom[num_lineas];
	int j;
	float media;
	data=fopen("promedio.txt","r");
	
	
	for(j=0;j<num_lineas;j++)
		{
			prom[j]=0;/*inicialización de arreglo a ceros*/
		}
	for(j=0;j<num_lineas;j++)
		{
		fscanf(data,"%f\n",&prom[j]);/*escaneo de datos y asignacion de valores a elementos del arreglo*/
		
		}
	for(j=0;j<num_lineas;j++)
		{
		media+=prom[j];/*sumatoria de valores para calculo de promedio*/
		}
	
	float average; 
	average=media/num_lineas;/*calculo de la media aritmetica*/
	printf("promedio=%f\n",average);
	float desv=0;
	float sigma;
	for(j=0;j<num_lineas;j++)
		{
		sigma=pow(prom[j]-average,2);/*sumatoria*/
		}

	
	float fact=0;
	fact=(1.0/(num_lineas-1.0));/*calculo del factor de la desviacion*/
	desv=sqrt(fact*sigma);
	printf("desviacion estandar=%f\n",desv);
	fclose(data);
		
	return 0;

}
