#include<stdio.h>
void main()
{
	int n,a[100],search=0,i;
	printf("Enter the number of terms in array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be  search :");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
	if(a[i]==search)
	{
		printf("The number %d is present at the location %d ",search,i+1);
		break;
	}
}
	if(i==n)	
		printf("Enter number id not present in the array");
}
