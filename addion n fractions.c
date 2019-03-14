
#include<stdio.h>
struct fraction
{
	int n;
	int d;
};
void input1(int *r)
{	
	printf("enter the value of n");
	scanf("%d",r);
}	
struct fraction input2(int *r,struct fraction a[])
{
	int i;
	for(i=0;i<*r;i++)
	{
		printf("enter the numerator");
		scanf("%d",&a[i].n);
		printf("enter the denominator");
		scanf("%d",&a[i].d);
	} 
	
}
void compute(struct fraction a[],struct fraction sum,int *r)
{
	sum.n=1;
	sum.d=1;
	int i;
	for(i=0;i<*r;i++)
	{
	  	sum.n=sum.n*a[i].d+a[i].n*sum.d;
		sum.d=sum.d*a[i].d;
	}
	printf("%d/%d",sum.n,sum.d);
}
int main()
{
	int i,r;
	struct fraction a[i];
	struct fraction sum; 
	input1(&r);
	input2(&r,&a[r]);
	compute(&a[r],sum,&r);
}

