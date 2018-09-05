#include<stdio.h>
#include<math.h>

int main()

{

	int xi,xf,esp,i,n;
	float exp_a,log_a,sen_a,cos_a,sqrt_a;


	printf("Bienvenido, introduce el valor inicial que deseas evaluar\n");
	scanf("%i",&xi);

	printf("Introduce el valor final a evaluar\n");

	scanf("%i",&xf);
	
	

	printf("Introduce el intervalo el espaciado entre cada salto\n");

	scanf("%f",&esp);
	

	n=(xf-xi)/esp;
/*la n dice cuantas veces se va a realizar la operacion*/
	for(i=0;i<n;i++){/*la i=0 dice que empieza en el cero de los valores del intervalo, no el cero como tal*/
		exp_a=exp(xi);
		printf("%f \t exp \n",xi,exp_a);
		log_a=log(xi);
		printf("%f \t log \n",xi,log_a);
		sen_a=sin(xi);
		printf("%f \t sen \n",xi,sen_a);
		cos_a=cos(xi);
		printf("%f \t cos \n",xi,cos_a);
		sqrt_a=sqrt(xi);
		printf("%f \t sqrt \n",xi,sqrt_a);
		xi=xi+esp;/*esta operacion modifica a variable que se va a evaluar en las funciones, es independeiente del contador, pero debe ir acumulando el espaciado*/
	}


	return 0;
}

