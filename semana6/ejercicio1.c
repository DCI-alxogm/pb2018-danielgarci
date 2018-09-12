#include<stdio.h>


int main()

{
	int average;
	int a,c,d,i,j,e,f,g,h,w,k,l,m,b,o,p,q,r;
	int n=10;
	int boysume,girlsume;
	printf("BIENVENIDO\n");
	printf("------------------------------------------------------\n");
	printf("Este programa te permite elaborar un resumen de un listado de 10 alumnos, para los cuales se te pedirá que introduzcas sexo, promedio y semestre que cursa cada uno de ellos\n");
	
	float gender[n];
	float grade[n];
	float course[n];

	printf("Introduce el sexo de cada alumno, empleando 1=hombre/0=mujer\n");
	for(i=0;i<n;i++){
		scanf("%f\n",&gender[i]);
			}
	printf("Introduce el semestre que cursa cada alumno, en el mismo orden\n");
	
	for(i=0;i<n;i++){
		scanf("%f\n",&course[i]);
			}
	printf("Introduce el promedio general de cada alumno\n");

	for(i=0;i<n;i++){
		scanf("%f\n",&grade[i]);
			}
	
	

	if(gender[i]==0){
		boysume++;
	}else{
		girlsume++;
			}
	printf("En total hay %i varones\n",boysume);
	printf("y %i mujeres\n",girlsume);
	
	average=(grade[i]+average)/10;
	printf("El promedio de las calificaciones es: %f\n",average);

	printf("inserta semestre del estudiante\n");
		scanf("%f",&course[i]);
		if(course[i]==1)
		{
			e=1+e;		
		}
		else if(course[i]==2)
		{
			g=1+g;		
		}
		else if(course[i]==3)
		{
			h=1+h;		
		}
		else if(course[i]==4)
		{
			w=1+w;		
		}
		else if(course[i]==5)
		{
			j=1+j;		
		}
		else if(course[i]==6)
		{
			k=1+k;		
		}
		else if(course[i]==7)
		{
			l=1+l;		
		}
		else if(course[i]==8)
		{
			m=1+m;		
		}
		else if(course[i]==9)
		{
			n=1+n;		
		}
		else if(course[i]>9)
		{
			r=1+r;
		}

	printf("promedio de edades de los estudiantes= %i\n",d);
	printf("estudiantes en primer semestre= %i\n",e);
	printf("estudiantes en segundo semestre= %i\n",g);
	printf("estudiantes en tercer semestre= %i\n",h);
	printf("estudiantes en cuarto semestre= %i\n",i);
	printf("estudiantes en quinto semestre= %i\n",j);
	printf("estudiantes en sexto semestre= %i\n",k);
	printf("estudiantes en septimo semestre= %i\n",l);
	printf("estudiantes en octavo semestre= %i\n",m);
	printf("estudiantes en noveno semestre= %i\n",b);
	printf("estudiantes en otro semestre= %i\n",r);


	return 0;

}
