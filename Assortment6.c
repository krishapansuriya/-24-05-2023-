#include<stdio.h>
main()
{
	int m=3,n=3,sum=0;
	int i,j;
	int matrix[3][3]={{22,23,24},{24,23,22},{22,23,24}};
	if(m==n)
	{
		printf("\nEnter matrix elements=\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d",matrix[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<m;i++)
		{
			sum=sum+matrix[i][i];
		}
		printf("\nDiagonal element sum=%d\n",sum);
	}
	else
	{
		printf("\nOt square matrix\n");
	}
}
