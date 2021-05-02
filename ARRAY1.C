#include<stdio.h>
int main()
{
	int i,s[3];
	printf("enter student marks : ");
	for(i=0;i<4;i++)
	{
		printf("\n for student %d : ",i+1);
		scanf("%d",&s[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("the entered marks for student %d :%d\n",i+1,s[i]);
	}
return 0;
}
