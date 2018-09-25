#include<stdio.h>
#include<math.h>

int main()

{	
	FILE *data;
	FILE *results;
	int delta_temp;/*delta temporal*/
	double x[delta_temp];/*coordenada de la posición en x*/
	double y[delta_temp];/*coordenada de la posición en y*/
	double z[delta_temp];/*coordenada de la posición en z*/
	int i;/*contador*/
	int t_evol;/*tiempo total de la evolución del sistema*/
	int t_ini=0;/*tiempo inicial*/
	float h;/*intervalo del tiempo*/
	
	data=fopen("data.dat","r");
	
	fscanf(data,"%lf %lf %lf %d %d",&x[i],&y[i],&z[i],&t_evol,&h);
	delta_temp=t_evol/h;
	fclose(data);
	for(i=0;i<t_evol;i++)/*inicialización de arreglos a cero*/
		{
			x[i]=0;
		}
	for(i=0;i<t_evol;i++)/*inicialización de arreglos a cero*/
		{
			y[i]=0;
		}
	for(i=0;i<t_evol;i++)/*inicialización de arreglos a cero*/
		{
			z[i]=0;
		}
	results=fopen("results.dat","w");
			fprintf(results,"%lf %lf %lf\n",x[i],y[i],z[i]);
			printf("%lf %lf %lf\n",x[i],y[i],z[i]);
	fclose(results);
	return 0;
	
}	
	
