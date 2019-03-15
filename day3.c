#include<stdio.h>
int input()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	return a;
}
void input2(int a,int sum[])
{
	int i;
	printf("enter the numbers to be added\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&sum[i]);
	}
}
/*int compute(int *a,int sum[])
{
	int i;
	int s=0;
	for(i=0;i<*a;i++)
	{
		s=s+sum[i];
		
	}
	return s;
}
int output(int s)
{
	printf("the result is %d",s);
}
*/
int main()
{
	int x;
	x=input();
	int sum[x];
	input2(x,sum);
/*	z=compute(sum[j],&x);
	output(z);q
*/
}

