#include<stdio.h>
#include<math.h>

int main()

{

	float exp_A;
	int n=10,j;
	

	for(j=0;j<n;j++){
		exp_A=exp(j);
		printf("%i \t %\n",j,exp_A);
	}
	

	return 0;
}
