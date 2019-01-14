#include<stdio.h>
int input(int *a,int *b,int *c)
{
        printf("enter the value of a");
        scanf("%d",a);
        printf ("enter thr value of b");
        scanf("%d",b);
        printf("enter the value of c");
        scanf("%d",c);
}
int compute(int a,int b,int c)
{
        int d;
        if(a<b)
        {
                if (a<c)
                {

                        d=a;
                        return d;
                }
        }
        if(b<c)
        {
                if(b<a)
                {
                        d=b;
                        return d;
                }
        }
        if(c<a)
        {
                if(c<b)
                {
                        d=c;
                        return d;
                }
        }

}
int output(int o,int x,int z,int y)
{
        printf("%d is smaller than %d,%d,%d",o,x,z,y);
}
int main(int x,int y,int z,int o)
{
        input(&x,&y,&z);
        o=compute(x,y,z);
        output(o,x,y,z);
}

