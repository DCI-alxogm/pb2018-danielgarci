#include<stdio.h>
#include<math.h>


int main()


{

	FILE *data;
	FILE *results;
	int a;
	int b;
	int h;
	int k;
	int i,
	int j;
	int integral;
	int funcion;
	int n;
	int potencia;
	int delta;

	data=fopen("data.txt","r");
	fscanf(data,"%i %i %i %i %i",&a,&b&potencia,&n,&k);
	fclose(data);/*lectura de datos*/
	results=fopen("results.txt","w");
	fprintf(results,"----------------------------------------------------------------------------------------\n");
	fprintf(results,"X     f(x)     Sf(x)\n");
	fprintf(results,"----------------------------------------------------------------------------------------\n");
	if(1<potencia<100)
			{
			
			delta=(b-a)/n;
			for(i=a;i<=b;i+=delta)
				{
					funcion=pow(i,potencia);
					h=(i-a)/n;
					integral=(pow(a,potencia)+pow(i,potencia))/2;
					for(j=1;j<b;j++)
						{
							integral+=(pow(a+j*h,potencia);
						}
					integral*=h;
				}
	fprintf(results,"%i     %i     %i\n",i,     funcion,     integral);
	fclose(results);
	}else{
			printf("Not defined domain\n");

	}
	return 0;

}
	
