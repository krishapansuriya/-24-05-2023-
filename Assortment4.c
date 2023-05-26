#include<stdio.h>
main()
{
	int a[100][100],b[100][100],sum[100][100];
	int i,j,r,c;
	printf("Enter number of row=");
	scanf("%d",&r);
	printf("Enter number of column=");
	scanf("%d",&c);
	printf("Enter array elements of a=\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The array elements of b=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nSum array=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("\nSum=%d\n",sum[i][j]);
	}
	printf("\n");
}
