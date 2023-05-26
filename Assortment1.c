#include<stdio.h>
main()
{
	int a[100];
	int n,i;
	printf("Enter size of array:-");
	scanf("%d",&n);
	printf("Array elements:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("Nagative elements=%d\n",a[i]);
		}
	}
}
