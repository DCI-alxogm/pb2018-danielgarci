#include<stdio.h>

int row;
int column;
void matrix_print(float matrix[row][column])
	{
	
	int row;
	int column;
	int i;/*counter*/
	int j;/*counter*/
	float epsilon;
	float con;
	float left;
	float right;
	float upper;
	float lower;
	float storage;
	float matrix[row][column];

	for(i=0;i<row;i++)
		{
		for(j=0;j<column;j++)
			{
			printf("%f ",matrix[i][j]);			
			}
		printf("\n");
		}
	printf("\n");	

	}
	

