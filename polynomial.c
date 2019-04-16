#include<stdio.h>
#include<math.h>
struct polynomial
{
	int constant;
	int x;
	int power;
};
int input()
{
	int d;
	printf("enter the degree of a polynomial:\n");
	scanf("%d",&d);
	return d;
}
int input2(int d,struct polynomial p[])
{
	printf("%d\n",d);
	int i;	
	for(i=0;i<d;i++)
	{
		printf("enter the cofficient %d:\n",i+1);
		scanf("%d",&p[i].constant);
	}
}
struct polynomial compute(int d,struct polynomial p[],int r)
{
	int i,x,pow;
	for(i=0;i<d;i++)
	{
		r=r+p[i].constant*pow(d-i,x);
	}
}
int main()
{
	int x,d,i,r;
	d=input();
	struct polynomial p[i];
	input2(d,p);
	compute(d,p,r);
}
