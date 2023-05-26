#include<stdio.h>
main()
{
	int a[100];
	int n,i;
	printf("Enter size of array:-");
	scanf("%d",&n);
	printf("Array element:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before right rotate array=");
	for(i=n;i>=0;i--)
	{
		printf("%d  ",a[i]);
	}
}
