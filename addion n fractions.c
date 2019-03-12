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
void input2(int r)
{
	struct fraction *a[r];
	int i;
	printf("enter the numerator");
	printf("enter the denominator");
	for(i=0;i<r;i++)
	{
		scanf("%d",&a[i]->n);
		scanf("%d",&a[i]->d);
		printf("%d/%d\n",a[i]->n,a[i]->d);
	}
	
}
/*void compute(struct fraction a[r],int *r)
{
	struct fraction sum[r]=0;
	for(i=0;i<r;i++)
	{
		sum[r].n=sum[r]+sum[i];
	}
}*/
int main()
{
	int i,r;
	struct fraction a[i]; 
	input1(&r);
	input2(r);
}
