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
		printf("\nEl número en decimal es %i",decimal);

	
}


	
