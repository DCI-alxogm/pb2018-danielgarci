#include<stdio.h>


int main()

{
	int a;
	int b;
	int fact=1;
	int op;

	/*permite calcular el factorial de numero introducido por el usuario*/

	
	printf("Bievenido, presiona 1 para acceder\n");
	scanf("%d",&op);
		if(op==1){
		
		printf("Bienvenido, introduce el número del que deseas conocer el factorial\n");

			scanf("%d",&a);

				for(b=a;b>1;b--){
					fact=fact*b;
						
						}
					printf("El factorial de %d = %d\n",a,fact);
		
		}else{
			printf("NOT DEFINED\n");
		}
			
			return 0;
}
					
					
