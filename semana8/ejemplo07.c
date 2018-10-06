#include<stdio.h>
#include<stdlib.h>


int main()

{
	int i;
	int sum=0;
	int *num;
	printf("Introduce 6 números enteros\n");
	
	num=(int*)malloc(num* sizeof(int));
	for(i=0;i<6;i++)
		{
		
		scanf("%d\n",&num[i]);
		sum+=num[i];

		
		}
	printf("suma=%d\n",sum);
	return 0;


}

