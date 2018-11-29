#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()

{

double X;
double Y;
double Z;
double Vx;
double Vy;
double Vz;
int i;//counter
double h;//time lapse
int delta_tem=t_evol/h;
double Fx=0;
double Fy=0;
double Fz=0;
double G=39.47841760435743;
double M=1.13 //Mass alpha centauri B-solar masses.
int t_evol;
FILE *data;


data=fopen("initial_data.dat","r");
fscanf(data,"%lf %lf %lf %lf %lf %lf %lf %i",&X, &Y, &Z, &Vx, &Vy, &Vz, &h, &t_evol);//initial parameters reading
fclose(data);

for(i=0,i<delta_temp,i++)
	{
	Fx+=-((G*M*M*X)/(pow(X,3)));	
	Fy+=-((G*M*M*Y)/(pow(Y,3)));	
	Fz+=-((G*M*M*Z)/(pow(Z,3)));
	Vx+=Vx+(1/2)*(Fx+(Fx+h))*h;//speed in time t+h
	Vy+=Vy+(1/2)*(Fy+(Fy+h))*h;
	Vz+=Vz+(1/2)*(Fz+(Fz+h))*h;	
	X+=X+h*Vx+(1/2)*Fx*h*h;//position in time t+h
	Y+=Y+h*Vy+(1/2)*Fy*h*h;
	Z+=Z+h*Vz+(1/2)*Fz*h*h;
	
	}

return 0;

}

