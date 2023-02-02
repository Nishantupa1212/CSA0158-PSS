#include<stdio.h>
void main()
{
	int n,a[100],sm,lr,i;
	printf("Enter the number you want:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("TEH number is %d\n",i+1);
		scanf("%d",&a[i]);
	}
	sm=a[0];
	lr=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<sm)
		{
			sm=a[i];
		}
		if(a[i]>lr)
		{
			lr=a[i];
		}
	}
	printf("THE smallest nnumber is :%d\n",sm);
	printf("The largest number is:%d \n",lr);
}
