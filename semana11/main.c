#include <stdio.h>
#include <stdlib.h>



int main()

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
	FILE *data;
	FILE *iteration;
	int c=0;
	FILE *results;
	
	data=fopen("data.dat","r");/*reading file opening*/

	fscanf(data,"%d %d %f %f %f %f %f",&row,&column,&left,&upper,&right,&lower,&epsilon);
	
	fclose(data);/*end of reading file*/
		
	float matrix[row][column];/*matrix definition*/
	
	for(i=0;i<row;i++)
		{
		for(j=0;j<column;j++)
			{
	      		 matrix[i][j]=0;/*matrix initialization to zero*/	
			}	
		}
	
	for(i=0;i<row;i++)/*values fixation*/
		{
		for(j=0;j<column;j++)
			{
			if(i==(row-1)&&j==(column-1))/*righ lower corner*/
				{
				matrix[i][j]=(lower+right)/2;
				}
			else if(i==0&&j==0)/*left upper corner*/
				{
				matrix[i][j]=(upper+left)/2;
				}
			else if(i==0&&j==(column-1))/*right upper corner*/
				{
				matrix[i][j]=(upper+right)/2;
				}
			else if(i==(row-1)&&j==0)/*left lower corner*/
				{
				matrix[i][j]=(left+lower)/2;
				}		
			else if(i==0)/*upper edge*/
				{
				matrix[i][j]=upper;
				}
			else if(i==(row-1))/*lower edge*/
				{
	       			matrix[i][j]=lower;
	   			}
			else if(j==(column-1))/*right edge*/
				{
				matrix[i][j]=right;
	   			}
			else if(j==0)/*left edge*/
				{
	       			matrix[i][j]=left;
	   			}
	   		else{
	   		matrix[i][j]=0;
	   			}
		}
	}
	
	iteration=fopen("results","w");	
	for(i=0;i<row;i++)
		{
		for(j=0;j<column;j++)
			{
			fprintf(iteration,"%f ",matrix[i][j]);			
			}
		fprintf(iteration,"\n");
		}

	fclose(iteration);
		
		
	storage=matrix[row-1][column-1]+matrix[row-1][column-1];
	con=((storage-matrix[row-1][column-1])/storage);
	while(con>epsilon)
		{
		storage=matrix[row-1][column-1];
		for(i=0;i<row;i++)/*values operation*/
			{
			for(j=0;j<column;j++)
				{
				if(i==(row-1)&&j==(column-1))/*lower right corner*/
					{
					matrix[i][j]=(matrix[i-1][j]+matrix[i][j-1])/2;
					}
				else if(i==0&&j==0)/*upper left corner*/
					{
					matrix[i][j]=(matrix[i+1][j]+matrix[i][j+1])/2;
					}
				else if(i==0&&j==(column-1))/*upper right corner*/
					{
					matrix[i][j]=(matrix[i][j-1]+matrix[i+1][j])/2;
					}
				else if(i==(row-1)&&j==0)/*lower left corner*/
					{
					matrix[i][j]=(matrix[i-1][j]+matrix[i][j+1])/2;
					}		
				else if(i==0)/*operation of the upper edge*/
					{
					matrix[i][j]=(matrix[i][j-1]+matrix[i+1][j]+matrix[i][j+1])/3;
					}
				else if(i==(row-1))/*operation of the lower edge*/
					{
					matrix[i][j]=(matrix[i][j-1]+matrix[i-1][j]+matrix[i][j+1])/3;
	   				}
				else if(j==(column-1))/*operation of the right edge*/
					{
					matrix[i][j]=(matrix[i-1][j]+matrix[i][j-1]+matrix[i+1][j])/3;
	   				}
				else if(j==0)/*operation of the left edge*/
					{
	    				matrix[i][j]=(matrix[i-1][j]+matrix[i][j+1]+matrix[i+1][j])/3;
	   				}
	   			else{
					matrix[i][j]=(matrix[i+1][j]+matrix[i-1][j]+matrix[i][j-1]+matrix[i][j+1])/4;			
					}
			}
		}	
		
		
			
			char buffer[32];
			snprintf(buffer,sizeof(char)*32,"results%i.txt",c);
			c++;
		results=fopen(buffer,"w");
		
		for(i=0;i<row;i++)
			{		
			for(j=0;j<column;j++)
				{
				fprintf(results,"%f ",matrix[i][j]);/*matrix print*/			
				}
			fprintf(results,"\n");
			}
		
		con=((storage-matrix[row-1][column-1])/storage);
	
		}
		fclose(results);



return 0;
}
