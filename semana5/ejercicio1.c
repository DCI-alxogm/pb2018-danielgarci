#include<stdio.h>
#include<math.h>

int main()

{

	int xi,xf,i,n,m;
	int exp_a,log_a,sen_a,cos_a,sqrt_a,esp;


	printf("Bienvenido, introduce el valor inicial que deseas evaluar\n");
	scanf("%i",&xi);

	printf("Introduce el valor final a evaluar\n");

	scanf("%i",&xf);
	
	

	printf("Introduce el intervalo el espaciado entre cada salto\n");

	scanf("%i",&m);
	

        n=(xf-xi)/m;	
  


/*la n dice cuantas veces se va a realizar la operacion*/
	for(i=0;i<n;i++)
              /*la i=0 dice que empieza en el cero de los valores del intervalo, no el cero como tal*/
	{       

                
                exp_a=exp(xi);
		
		log_a=log(xi);
		
		sen_a=sin(xi);
		
		cos_a=cos(xi);
		
		sqrt_a=sqrt(xi);

		
		printf("exp=%f \n", exp_a);
		printf("log=%f \n", log_a);
		printf("sen=%f \n", sen_a);
		printf("cos=%f \n", cos_a);
		printf("sqrt=%f \n", sqrt_a);
		xi=xi+m;
		
	}


	return 0;

}
