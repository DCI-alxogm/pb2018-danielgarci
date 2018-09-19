#include<stdio.h>
#include<math.h>

int main()

{
	FILE *data;
	FILE *results;
	int p;
	int a;
	int b;
	int n;
	float integral;
	int func;
	int k;
	float delta;
	int i;
	float j,h;
	int base;
		

	data=fopen("data.txt","r");
	fscanf(data,"%i",&p);/*potencia a elevar la funcion*/
	fscanf(data,"%i",&a);/*valor minimo*/
	fscanf(data,"%i",&b);/*valor maximo*/
	fscanf(data,"%i",&n);/*numero x*/
	fscanf(data,"%i",&k);/*numero de divisiones*/	
	fclose(data);
	
	delta=(b-a)/n;
	results=fopen("results.txt","w");
	fprintf(results,"----------------------------------------------------------------------------------------\n");
	fprintf(results,"X     f(x)     Sf(x)\n");
	fprintf(results,"----------------------------------------------------------------------------------------\n");
	if(1<p<100){/*se define un valor máximo de la potencia a evaluar*/
	
	for(i=a;i<=b;i+=delta)/*evaluación de la función*/
		{
						
			func=pow(i,p);/*evaluacion de la funcion*/	
			h=(b-a)/k;
			integral=((pow(a,p)+pow(b,p))/2);
			for(j=1;j<k;j++)
				{
					integral+=pow(a+j*h,p);

				}
			integral*=h;
		}
	

	fprintf(results,"%i     %i     %f\n",i,     func,     integral);

	}else{
	
		printf("Not defined\n");
	}

return 0;
}
