#include<stdio.h>
void input(int *n)
{
	printf("enter a number");
	scanf("%d",n);
}
void input2(int n,int a[n])
{
	int i;
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int compute(int n,int a[n])
{	
	int i;
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
void output(int sum)
{
	printf("%d is the sum",sum);
}
int  main()
{
	int n,sum;
	input(&n);
	int a[n];
	input2(n,a);
	sum=compute(n,a);
	output(sum);
}
