#include<stdio.h>
#include<math.h>

int main()

{	
	
	int t_evol;/*tiempo total de la evolución del sistema*/
	double h;/*intervalo del tiempo*/
	int i;/*contador*/
	double G=39.4784176;/*constante de la gravitación universal en AU/day*/
	double r;/*distancia*/
	int mercury=1;
	int venus=2;
	int earth=3;
	int mars=4;
	int jupiter=5;
	int saturn=6;
	int uranus=7;
	int neptune=8;
	int pluto=9;
	int solarsys=11;
	int option;
	double x;/*coordenada de la posición en x*/
	double y;/*coordenada de la posición en y*/
	double z;/*coordenada de la posición en z*/
	double Vx;/*coordenada de la posición en x*/
	double Vy;/*coordenada de la posición en y*/
	double Vz;/*coordenada de la posición en z*/
	
	printf("Presiona 1 para obtener la óbita de mercurio\n");
	printf("Presiona 2 para obtener la óbita de venus\n");
	printf("Presiona 3 para obtener la óbita de tierra\n");
	printf("Presiona 4 para obtener la óbita de marte\n");
	printf("Presiona 5 para obtener la óbita de jupiter\n");
	printf("Presiona 6 para obtener la óbita de saturno\n");
	printf("Presiona 7 para obtener la óbita de urano\n");
	printf("Presiona 8 para obtener la óbita de neptuno\n");
	printf("Presiona 9 para obtener la óbita de plutón\n");

	scanf("%i",&option);
	if(option==1)
		{
		FILE *data;
		FILE *results;
		data=fopen("mercury.dat","r");
		results=fopen("mercuryorbit.dat","w");
		fscanf(data,"%i %lf",&t_evol,&h);
		int delta_temp=t_evol/h;
		fscanf(data,"%lf %lf %lf %lf %lf %lf",&x,&y,&z,&Vx,&Vy,&Vz);
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
					fprintf(results,"%lf %lf %lf %lf %lf %lf\n",x,y,z,Vx,Vy,Vz);
				}

		fclose(results);
		}else if(option==2)
			{
		FILE *data;
		FILE *results;
		data=fopen("venus.dat","r");
		results=fopen("venusorbit.dat","w");
		fscanf(data,"%i %lf",&t_evol,&h);
		int delta_temp=t_evol/h;
		fscanf(data,"%lf %lf %lf %lf %lf %lf",&x,&y,&z,&Vx,&Vy,&Vz);
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
					fprintf(results,"%lf %lf %lf %lf %lf %lf\n",x,y,z,Vx,Vy,Vz);
				}

		fclose(results);
		}else if(option==3)
			{
		FILE *data;
		FILE *results;
		data=fopen("earth.dat","r");
		results=fopen("earthorbit.dat","w");
		fscanf(data,"%i %lf",&t_evol,&h);
		int delta_temp=t_evol/h;
		fscanf(data,"%lf %lf %lf %lf %lf %lf",&x,&y,&z,&Vx,&Vy,&Vz);
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
					fprintf(results,"%lf %lf %lf %lf %lf %lf\n",x,y,z,Vx,Vy,Vz);
				}

		fclose(results);
		}else if(option==4)
			{
		FILE *data;
		FILE *results;
		data=fopen("mars.dat","r");
		results=fopen("marsorbit.dat","w");
		fscanf(data,"%i %lf",&t_evol,&h);
		int delta_temp=t_evol/h;
		fscanf(data,"%lf %lf %lf %lf %lf %lf",&x,&y,&z,&Vx,&Vy,&Vz);
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
					fprintf(results,"%lf %lf %lf %lf %lf %lf\n",x,y,z,Vx,Vy,Vz);
				}

		fclose(results);
		}else if(option==5)
			{
		FILE *data;
		FILE *results;
		data=fopen("jupiter.dat","r");
		results=fopen("jupiterorbit.dat","w");
		fscanf(data,"%i %lf",&t_evol,&h);
		int delta_temp=t_evol/h;
		fscanf(data,"%lf %lf %lf %lf %lf %lf",&x,&y,&z,&Vx,&Vy,&Vz);
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
					fprintf(results,"%lf %lf %lf %lf %lf %lf\n",x,y,z,Vx,Vy,Vz);
				}

		fclose(results);
		}else if(option==6)
			{
		FILE *data;
		FILE *results;
		data=fopen("saturn.dat","r");
		results=fopen("saturnyorbit.dat","w");
		fscanf(data,"%i %lf",&t_evol,&h);
		int delta_temp=t_evol/h;
		fscanf(data,"%lf %lf %lf %lf %lf %lf",&x,&y,&z,&Vx,&Vy,&Vz);
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
					fprintf(results,"%lf %lf %lf %lf %lf %lf\n",x,y,z,Vx,Vy,Vz);
				}

		fclose(results);
		}else if(option==7)
			{
		FILE *data;
		FILE *results;
		data=fopen("uranus.dat","r");
		results=fopen("uranusyorbit.dat","w");
		fscanf(data,"%i %lf",&t_evol,&h);
		int delta_temp=t_evol/h;
		fscanf(data,"%lf %lf %lf %lf %lf %lf",&x,&y,&z,&Vx,&Vy,&Vz);
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
					fprintf(results,"%lf %lf %lf %lf %lf %lf\n",x,y,z,Vx,Vy,Vz);
				}

		fclose(results);
		}else if(option==8)
			{
		FILE *data;
		FILE *results;
		data=fopen("neptune.dat","r");
		results=fopen("neptuneorbit.dat","w");
		fscanf(data,"%i %lf",&t_evol,&h);
		int delta_temp=t_evol/h;
		fscanf(data,"%lf %lf %lf %lf %lf %lf",&x,&y,&z,&Vx,&Vy,&Vz);
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
					fprintf(results,"%lf %lf %lf %lf %lf %lf\n",x,y,z,Vx,Vy,Vz);
				}

		fclose(results);
		}else if(option==9)
			{
		FILE *data;
		FILE *results;
		data=fopen("pluto.dat","r");
		results=fopen("plutoorbit.dat","w");
		fscanf(data,"%i %lf",&t_evol,&h);
		int delta_temp=t_evol/h;
		fscanf(data,"%lf %lf %lf %lf %lf %lf",&x,&y,&z,&Vx,&Vy,&Vz);
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
					fprintf(results,"%lf %lf %lf %lf %lf %lf\n",x,y,z,Vx,Vy,Vz);
				}

		fclose(results);
		}/*cierre de los ciclos de cálculo*/
	return 0;
	
}	
	
