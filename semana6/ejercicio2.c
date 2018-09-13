#include<stdio.h>


int main()

{
	int average;
	FILE *archivo;
	FILE *archivo2;
	char var[255];
	int a=10;/*reserva de memoria estatica para los arreglos*/
	int b,c,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0;/*contadores*/
	float gender[10],age[10],grade[10],course[10];/*arreglos*/
	 
	char gen[1];
	
	printf("***************************BIENVENIDO*******************************\n");
	printf("////***------------------------------------------------------***////\n");
	printf("Este programa te permite elaborar una estadística de un listado de 10 alumnos a partir de un archivo previamente capturado para los cuales se te pedirá que introduzcas sexo, promedio,edad y semestre que cursa cada uno de ellos\n");
		
	
	for(b=0;b<a;b++){
		archivo=fopen("estudiantes.txt","r");
		fscanf(archivo,"%f",&gender[b]);
		fscanf(archivo,"%f",&age[b]);
		fscanf(archivo,"%f",&grade[b]);
		fscanf(archivo,"%f",&course[b]);


			d=age[b]+d;/*escabeo y almacenamiento de la suma de las edades en una sola varible*/
						
			
				


				
				if(course[b]==1){
					e=1+e;
				}else if(course[b]==2)
					{f=1+f;
				}else if(course[b]==3)
					{g=1+g;
				}else if(course[b]==4)
					{h=1+h;
				}else if(course[b]==5)
					{i=1+i;
				}else if(course[b]==6)
					{j=1+j;
				}else if(course[b]==7)
					{k=1+k;
				}else if(course[b]==8)
					{l=1+l;
				}else if(course[b]==9)
					{m=1+m;
				}else if(course[b]>9)
					{n=1+n;
				}
			
			o=grade[b]+o;/*escaneo y almaceniamiento en una sola variable de la suma de las calificaciones*/
			
		
	
			
				if(gen[0]=='m'){
					p=1+p;/*variables que almacenan la discriminacion del ciclo for*/
				}else if(gen[0]=='h'){
					q=1+q;
				}		
			
	}
	r=d/10;/*una vez calculado el valor final de esta variable dentro del ciclo for, se calcula el promedio fuera de este*/
	s=o/10;

	/*impresion de resultados*/
	fclose(archivo);
	archivo2=fopen("estadística.txt","w");
	

	fprintf(archivo,"Promedio global                   => %i\n",s);
	fprintf(archivo,"Promedio de edades global         => %i\n",r);
	fprintf(archivo,"Estudiantes de 1er semestre       => %i\n",e);
	fprintf(archivo,"Estudiantes de 2do semestre       => %i\n",f);
	fprintf(archivo,"Estudiantes de 3er semestre       => %i\n",g);
	fprintf(archivo,"Estudiantes de 4to semestre       => %i\n",h);
	fprintf(archivo,"Estudiantes de 5to semestre       => %i\n",i);
	fprintf(archivo,"Estudiantes de 6to semestre       => %i\n",j);
	fprintf(archivo,"Estudiantes de 7mo semestre       => %i\n",k);
	fprintf(archivo,"Estudiantes de 8vo semestre       => %i\n",l);
	fprintf(archivo,"Estudiantes de 9no semestre       => %i\n",m);
	fprintf(archivo,"Estudiantes de grados superiores  => %i\n",n);
	
	fclose(archivo);

	return 0;

}/*fin de la funcion main*/
