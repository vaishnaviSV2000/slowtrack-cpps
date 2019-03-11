#include<stdio.h>
struct fraction
{
	int n;
	int d;
};
struct fraction input1(int *r)
{	
	printf("enter the value of n");
	scanf("%d",r);
}	
struct fraction input2(int r,struct fraction a[r])
{
	int i;
	printf("enter the numerator");
	printf("enter the denominator");
	for(i=0;i<r;i++)
	{
		scanf("%s",&a[i].n);
		scanf("%s",&a[i].d);
	} 
}
void main()
{
	int i,r;
	struct fraction a[i]; 
	input1(&r);
	input2(r,a[i]);
}

