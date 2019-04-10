

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
struct fraction input2(int r,struct fraction a[])
{
	int i;
	for(i=0;i<r;i++)
	{
		printf("enter the numerator\n");
		scanf("%d",&a[i].n);
		printf("enter the denominator\n");
		scanf("%d",&a[i].d);
	} 
	
}
struct fraction compute(struct fraction a[],struct fraction sum,int r)
{
	sum.n=0;
	sum.d=1;
	int i;
	for(i=0;i<r;i++)
	{
		if(sum.d!=a[i].d)
		{
			if(sum.d%a[i].d==0)
			{
				sum.n=sum.n+a[i].n*(sum.d/a[i].d);
				sum.d=sum.d;
			}
			else if(a[i].d%sum.d==0)
			{
				sum.n=sum.n*(a[i].d/sum.d)+a[i].n;
				sum.d=a[i].d;
			}
			else
			{
				sum.n=sum.n*a[i].d+a[i].n*sum.d;
				sum.d=a[i].d*sum.d;
			}
		}
		else
		{
			sum.n=a[i].n+sum.n;
			sum.d=a[i].d;
		}
	}
	printf("%d/%d\n",sum.n,sum.d);
	return sum;
}
void output(struct fraction sum)
{
	printf("%d/%d",sum.n,sum.d);
}
int main()
{
	int i,r;
	struct fraction k;
	struct fraction a[i];
	struct fraction sum; 
	input1(&r);
	input2(r,a);
	sum=compute(a,sum,r);
	output(sum);
}

   
