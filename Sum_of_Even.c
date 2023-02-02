#include<stdio.h>
void main()
{
	int a=2,sum=0,n;
	printf("Enter the maximum number :");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("%d\n",a);
		sum=sum+a;
		a=a+2;
	}
	printf("The sum od even number are: %d",sum);
	
}
