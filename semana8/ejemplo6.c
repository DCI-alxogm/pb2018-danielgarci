#include<stdio.h>
#include<stdlib.h>
	

int main()


{

	int i;
	int num[6];
	int sum=0;
	
	printf("Introduce 6 números enteros:\n");
	
	for(i=0;i<6;i++)
		{
		scanf("%d\n",(num+i));
		sum+=*(num+i);
		}
	printf("Suma=%d\n",sum);
	return 0;


}

