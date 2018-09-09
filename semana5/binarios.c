#include<stdio.h>
#include<math.h>

/*este programa permite convertir un numero binario de 8 bits a decimal, la unica condicion es que solo puedes ingresar cualquier numero a 8 bits*/

int main()


{
	/*se delacaran las variables, en este caso para la lectura del numero binario se usa la variable de tipo char y se especifica que estrcitamente puede leer 8 caracteres*/
	char binario[8]={'0','0','0','0','0','0','0','0'};
	int numbinario[8];/*est variable de tipo entero especifica que solo puede almacenar numeros de 8 bits*/
	int a;
	int b=-1;
	int decimal=0;
 	int opcion;
  	int w;
		
	printf("Hola, presiona 1 para acceder\n");
	scanf("%i",&w);
	
while(w==1){/*este while permite preguntar al final del programa si deseas realizar otra operación*/

	printf("BIENVENIDO\n Este programa te permite convertir un númedo binario que introduzcas a sistema decimal\n");
	printf("-----------------------------------------------------------------------------------------------------\n");
	printf("(1) Para convertir de binario a decimal\n");
	printf("(2) Para convertir de decimal a binario\n");
	scanf("%i",&opcion);



	switch(opcion)
 	{
		case 1:
			printf("teclea el número binario de 8 bits\n");
			scanf("%8s",binario);
	
	
			/* el ciclo for dice que empieza a contar en 7 y cuando a es mayor o igual que cero a toma el valor de a-1, se empieza a contar desde 7 para la distribucion de los valores*/
			for(a=7;a>=0;a=a-1)
				{
					b++;
					/*se establece un switch como discriminante del lenguaje binario para determinar que operacion se va a usar con cada valor*/
					switch(binario[b])
						{case '0':
							numbinario[a]=0;
	
						break;
						 case '1':
							numbinario[a]=1;
						break;
						default:
					printf("INVALID ENTRY\n");
				}
			decimal=numbinario[a]*pow(2,a)+decimal;
		}
			printf("---------------------------------\n");
			printf("\nEl número en decimal es %i\n\n",decimal);
			printf("---------------------------------\n");
			
		return 0;

		break;

		case 2:
			printf("CURRENTLY WORKING\n");

		return 0;
		
		break;

		default:

			printf("NOT DEFINED DOMAIN\n");

		}
		printf("¿Deseas realizar alguna otra operacion? si=1/no=2\n");
		scanf("%i",&w);

		

	}/*cierre de while*/

		return 0;
}


	
