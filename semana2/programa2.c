/*creado el 15 de agosto de 2018 por Daniel Garcia*/
/*se modifico el 15 de agosto para que arroje la edad que tendras en 10 años*/
#include<stdio.h>
int main()
{
int edad,edad2;
/*se define la variable edad y edad2 que es la que hace la operacion con la variable que introduce el usuario*/

char nombre[20];
/*se define la variable que te permite capturar el nombre y el numero de caracteres que admite*/

printf("Dime tu nombre\n*");
scanf("%s",&nombre);
printf("dime tu edad\n");
scanf("%i",&edad);
edad2=edad+10;
printf("%sTu edad en 2028 sera %i \n",nombre,edad2);
return 0;
}

