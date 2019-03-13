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
	printf("enter the numerator");
	printf("enter the denominator");
	for(i=0;i<*r;i++)
	{
		scanf("%d",&a[i].n);
		scanf("%d",&a[i].d);
	} 
	
}
void compute(struct fraction a[],int *r)
{
	int i;
	for(i=0;i<r;i++)
	{
	  	a[i].n=(a[i].n*a[i].d)+(a[i].n*a[i].d);
		a[i].d=(a[i].d*a[i].d);

	}
}
int main()
{
	int i,r;
	struct fraction a[i]; 
	input1(&r);
	input2(&r,&a[r]);
	compute(&a[i],&r);
}
