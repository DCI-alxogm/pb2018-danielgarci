#include<stdio.h>
#include<math.h>

int main()

{

	int xi,xf,i,n;
	int exp_a,log_a,sen_a,cos_a,sqrt_a,esp;


	printf("Bienvenido, introduce el valor inicial que deseas evaluar\n");
	scanf("%d",&xi);

	printf("Introduce el valor final a evaluar\n");

	scanf("%d",&xf);
	
	

	printf("Introduce el intervalo el espaciado entre cada salto\n");

	scanf("%d",&esp);
	

        n=(xf-xi)/esp;	
  


/*la n dice cuantas veces se va a realizar la operacion*/
	for(i=0;i<n;i++)
              /*la i=0 dice que empieza en el cero de los valores del intervalo, no el cero como tal*/
	{       

                print("%d",n);
                /*exp_a=exp(xi);
		printf("exp de %d \t =%d\n",xi,exp_a);
		log_a=log(xi);
		printf("log de %d \t =%d \n",xi,log_a);
		sen_a=sin(xi);
		printf("log de %d \t =%d \n",xi,sen_a);
		cos_a=cos(xi);
		printf("cos de %f \t =%d \n",xi,cos_a);
		sqrt_a=sqrt(xi);
		printf("raiz de %f \t =%d \n",xi,sqrt_a);
		xi=xi+esp;/*esta operacion modifica a variable que se va a evaluar en las funciones, es independeiente del contador, pero debe ir acumulando el espaciado*/*/
	}


	return 0;
}

