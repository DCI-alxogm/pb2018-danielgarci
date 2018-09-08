#include<stdio.h>


 	int main()

{

	float temp_C,temp_K;
	float Temp_C=100,final=200,delta;
	int n=10,i;
	int w=1;	


	printf("Bienvenido, presiona 1 para acceder\n");
	scanf("%i",&w);
	while(w==1){
	
	delta=(final-Temp_C)/n;
	for(i=0;i<n;i++){
		temp_K=temp_C+273.15;
		printf("%f %f\n",temp_C,temp_K);
		temp_C=temp_C+delta;
	}
		printf("¿Deseas realizar otra operación? si=1/no=2\n");
		scanf("%i",&w);
		
			return 0;
	}
	return 0;
}

