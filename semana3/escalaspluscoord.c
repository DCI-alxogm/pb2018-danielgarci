#include<stdio.h>
#include<math.h>

	int main()

{
	


		float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;

/*se declaran las variables con las que van a realizar las operaciones*/
		printf("Este programa hace una conversión de coordenadas cartesianas a esféricas, para lo que se te pedirá que introduzcas las 3 coordenadas x,y,z a transformar, posteriormente puedes hacer la misma conversion en sentido contrario\n");
		printf("introduce la coordenada en x\n");
		scanf("%f",&a);
		printf("introduce la coordenada en y\n");
		scanf("%f",&b);
		printf("introduce la coordenada en z\n");
		scanf("%f",&c);

		/*se hace la conversion a radianes para las funciones trigonometricas*/
		
		d=(a*(3.14159265/180));
		e=(b*(3.14159265/180));
		f=(c*(3.14159265/180));
		/*se efectuan las operaciones para pasar de cartesianas a esfericas*/
		

	        	g=sqrt(pow(a,2)+pow(b,2)+pow(c,2));
			h=atan((sqrt(pow(d,2)+pow(e,2)))/f);
			i=atan(e/d);

		/*se imprimen los resultados*/

		printf("los coordenadas esfericas son:\n");
		printf("r= %f\n",g);
		printf("teta= %f\n",h);
		printf("phi= %f\n",i);

		printf("*************************************************\n");

		printf("ahora pasaremos coordenadas esfericas a cartesianas\n");
		printf("introduce r\n");
		scanf("%f",&j);
		printf("introduce teta\n");
		scanf("%f",&k);
		printf("introduce phi\n");
		scanf("%f",&l);
		/*una vez que el usuario introdujo sus coordenadas, se hacen las operaciones*/
		m=j*sin(k)*cos(l);
		n=j*sin(k)*sin(k);
		o=j*cos(k);

		/*se imprimen los resultados*/
		
		printf("las coordenadas cartesianas son\n");
		printf("x= %f\n",m);
		printf("y= %f\n",n);
		printf("z= %f\n",o);

	return 0;

}
