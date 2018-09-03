#include<stdio.h>
#include<math.h>

int main()

{

	int A;
	int B;
	float C;
	float d;
	float exp_a,log_a,sen_a,cos_a,sqrt_a;


	printf("Bienvenido, introduce el valor minimo que deseas evaluar\n");
	scanf("%i",&d);

	printf("Introduce el valor maximo a evaluar\n");

	scanf("%i",&B);

	printf("Introduce el intervalo el espaciado entre cada salto\n");

	scanf("%f",&C);


	for(A=d;A<B;A+C){
		exp_a=exp(D);
		printf("%f \t exp \n",D,exp_a);
		log_a=log(D);
		printf("%f \t log \n",D,log_a);
		sen_a=sin(D);
		printf("%f \t sen \n",D,sen_a);
		cos_a=cos(D);
		printf("%f \t cos \n",D,cos_a);
		sqrt_a=sqrt(D);
		printf("%f \t sqrt \n",D,sqrt_a);
	}

	return 0;
}

