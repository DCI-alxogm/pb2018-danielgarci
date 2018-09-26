#include<stdio.h>
#include<math.h>

int main()

{	
	FILE *data;
	FILE *results;
	int a;
	int b;
	int c;
	int t_evol;/*tiempo total de la evolución del sistema*/
	int t_ini=0;/*tiempo inicial*/
	double h;/*intervalo del tiempo*/
	int i;/*contador*/

	data=fopen("data.dat","r");
	results=fopen("results.dat","w");
	fscanf(data,"%lf %lf %lf %i %lf",&a,&b,&c,&t_evol,&h);
	int delta_temp;/*delta temporal*/
	delta_temp=t_evol/h;
	double x[delta_temp];/*coordenada de la posición en x*/
	double y[delta_temp];/*coordenada de la posición en y*/
	double z[delta_temp];/*coordenada de la posición en z*/
	
	
	
	
	
	fscanf(data,"%lf %lf %lf",&x[i],&y[i],&z[i]);
	
	fclose(data);
	for(i=0;i<t_evol;i+h)/*inicialización de arreglos a cero*/
		{
			x[i]=0;
		}
	for(i=0;i<t_evol;i+h)/*inicialización de arreglos a cero*/
		{
			y[i]=0;
		}
	for(i=0;i<t_evol;i+h)/*inicialización de arreglos a cero*/
		{
			z[i]=0;
		}
	
	for(i=0;i<t_evol;i+h);
		{
			fprintf(results,"%lf %lf %lf\n",x[i],y[i],z[i]);
			printf("%lf %lf %lf\n",x[i],y[i],z[i]);
		}
	fclose(results);
	return 0;
	
}	
	
