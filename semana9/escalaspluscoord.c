#include<stdio.h>
#include<math.h>


float trig1(float a);
float trig2(float b);

	int main()

{
	
		/*se hace la declaracion de todas las variables que se van a utilizar en el programa*/

		float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
		int celsius;
		int fahrenheit;
		int opcion;
		
		/* esta es la introduccion del programa, es la primera interfaz con la que va a interactuar el usuario, en donde elige la opcion a la que va a acceder a traves de la funcion switch*/
		printf("Bienvenido, este programa te permite realizar conversiones de unidades entre escalas de temperatura y coordenadas cartesianas polares y viceversa\n");
		printf("Teclea una opcion a la que deseas acceder\n");
		printf("(1) Para conversion entre escalas de temperatura\n");
		printf("(2) Para conversion de coordenadas cartesianas a polares\n");
		scanf("%i",&opcion);

		/*se hace la declaracion de la funcion switch y a continuacion se presentan las opciones a las cuales puedes acceder a traves de la misma*/
		switch(opcion)
		{
			case 1:
				/*el caso 1, es la calculadora de temperatura*/
				/*se declaran las variables, que en este caso solo son dos, las 				temperatura a calcular que son las mismas con las que vamos a 					operar*/

				printf("Bienvenido, esta calculadora te permite hacer una 					conversión de grados celsius a fahrenheit y de fahrenheit a 					celsius\n");
				printf("Ingresa la temperatura en grados celsius\n");
				scanf("%i",&celsius);
				/*se escanea la variable con la que vamos a operar*/
				fahrenheit=((celsius*1.8)+32);
				/*se efectua la operacion*/
				printf("La temperatura en fahrenheit es %i\n",fahrenheit);
				/*se imprime el resultado de la operacion*/
				printf("Ahora vamos a hacer la conversion de fahrenheit a celsius\n");
				printf("Ingresa la temperatura en celsius\n");
				scanf("%i",&fahrenheit);
				/*en este caso, se hace una redefinicion de las variables que ya habian sido declaradas, y se escanea de nuevo el valor con el que se va a operar*/
				celsius=((fahrenheit-32)/1.8);
				/*se realiza la operacion*/
				printf("La temperatura en fahrenheit es %i\n",celsius);
				/*se imprime el resultado de la operacion*/
				return 0;
		
				break;

				/*la accion break, indica el fin del primer caso de la funcion switch*/
			case 2:
				

				/*el caso dos de la funcion switch es la funcion para la conversion entre coordenadas*/
 				/*se declaran las variables con las que van a realizar las operaciones*/
				printf("Este programa hace una conversión de coordenadas cartesianas a polares, 		para lo que se te pedirá que introduzcas las coordenadas x e y a transformar, 			posteriormente puedes hacer la misma conversion en sentido contrario\n");
				printf("introduce la coordenada en x\n");
				scanf("%f",&a);
				printf("introduce la coordenada en y\n");
				scanf("%f",&b);
		

				/*se hace la conversion a radianes para las funciones trigonometricas*/
		
				d=trig1(a);
				e=trig2(b);

		
				/*se efectuan las operaciones para pasar de cartesianas a esfericas*/
		

		        	g=sqrt(pow(a,2)+pow(b,2));
				h=atan((e/d));
			

				/*se imprimen los resultados*/

				printf("los coordenadas esfericas son:\n");
				printf("r= %f\n",g);
				printf("teta= %f\n",h);
		

				printf("*************************************************\n");

				printf("ahora pasaremos coordenadas esfericas a cartesianas\n");
				printf("introduce r\n");
				scanf("%f",&j);
				printf("introduce teta\n");
				scanf("%f",&k);
		
				/*una vez que el usuario introdujo sus coordenadas, se hacen las operaciones*/
				m=j*sin(k)*cos(l);
				n=j*sin(k)*sin(k);
		

				/*se imprimen los resultados*/
		
				printf("las coordenadas cartesianas son\n");
				printf("x= %f\n",m);
				printf("y= %f\n",n);
				
				break;

			default:
				printf("NOT DEFINED\n");

		}
float trig1(float a)
	{
	return a*(3.14159265/180);
	}
float trig2(float b)
	{
	return b*(3.14159265/180);
	}		


		return 0;

}
