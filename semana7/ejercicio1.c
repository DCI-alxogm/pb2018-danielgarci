#include<stdio.h>
#include<math.h>

int main()

{
	FILE *data;
	int p;
	int a;
	int b;
	int n;
	int integral;
	int func[n];
	int k;
	int h;
	int i;
	int x;
	int min;
	
	data=fopen("data.txt","r");
	fscanf(data,"%i",&p);
	fscanf(data,"%i",&a);
	fscanf(data,"%i",&b);
	fscanf(data,"%i",&n);
	
	x=(b-a)/n;	
	min=a;/*mantiene el valor de a constante*/7
	
	if(1<p<100){/*se define un valor máximo de la potencia a evaluar*/
	
	for(i=0;i<n;i++)/*evaluación de la función*/
		{
			min=min+x;			
			func=pow(x,p);	
			h=(min-a)/k;
		}
	

		
	}else{
	
		printf("Not defined\n");
	}

return 0;
}
