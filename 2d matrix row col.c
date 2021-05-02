#include<stdio.h>

int main()
{
	int i,j,row[4],col[3];
	printf("enter the data of matrix considering 3 columns and 4 rows :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",col[j]);
		}
	}printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d%d",row[i],col[j]);
		}
	}printf("\n");	
}
