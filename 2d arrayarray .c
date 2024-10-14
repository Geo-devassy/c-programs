#include <stdio.h>
int main()
{
	int a[3][3],r,c,i,j;
	printf("enter th no of rows and cols");
	scanf("%d%d",&r,&c);
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]->",i,j);
			scanf("%d",&a[i][j]);
		
		}
	}
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
		
	}
	return 0;
}
