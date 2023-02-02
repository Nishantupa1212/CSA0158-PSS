#include<stdio.h>
int main()
{
	int a=1,sum=0,num;
	printf("Enter the maximum value:");
	scanf("%d",&num);
	printf("The odd number are:");
	while(a<=num)
	{
		sum=sum+a;
		a=a+2;
		printf("%d\t",a);
	}
	printf("Sum of odd terms ar:%d\n",sum);
	
}
