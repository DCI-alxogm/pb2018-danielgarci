#include<stdio.h>
#include<math.h>

int main()

{	
	FILE *data;
	FILE *results;
	int t_evol;/*tiempo total de la evolución del sistema*/
	double h;/*intervalo del tiempo*/
	int i;/*contador*/
	double G=39.4784176;/*constante de la gravitación universal en AU/day*/
	double r;/*distancia*/

	data=fopen("earth.dat","r");
	results=fopen("results.dat","w");
	fscanf(data,"%i %lf",&t_evol,&h);
	printf("%i %lf\n",t_evol,h);
	double x;/*coordenada de la posición en x*/
	double y;/*coordenada de la posición en y*/
	double z;/*coordenada de la posición en z*/
	double Vx;/*coordenada de la posición en x*/
	double Vy;/*coordenada de la posición en y*/
	double Vz;/*coordenada de la posición en z*/
	int delta_temp=t_evol/h;
	fscanf(data,"%lf %lf %lf %lf %lf %lf",&x,&y,&z,&Vx,&Vy,&Vz);
	printf("%lf %lf %lf %lf %lf %lf\n",x,y,z,Vx,Vy,Vz);
	fclose(data);
	Vx*=365;
	Vy*=365;
	Vz*=365;
	for(i=0;i<delta_temp;i++)
		{

			
			x+=Vx*h;
			y+=Vy*h;
			z+=Vz*h;
			r=sqrt(x*x+y*y+z*z);/*calculo de la magnitud de r*/
			Vx-=h*((G*x)/(pow(r,3)));
			Vy-=h*((G*y)/(pow(r,3)));
			Vz-=h*((G*z)/(pow(r,3)));
			printf("%lf %lf %lf %lf %lf %lf\n",x,y,z,Vx,Vy,Vz);
			fprintf(results,"%lf %lf %lf %lf %lf %lf\n",x,y,z,Vx,Vy,Vz);
		}

	fclose(results);
	return 0;
	
}	
	
