     #include<stdio.h>
int input(int *a,int *b,int *c)
{
        printf("enter 3 numbers");
        scanf("%d%d%d",a,b,c);
}

int compute(int a,int b,int c)
{
   if(a<b && a<c)
        {
                printf("a is the smallest number");
                return a;
        }
   else if(b<c && b<a)
        {
                printf("b is the smallest number");
                return b;
        }

   else
       {
                printf("c is the smallest number");
                return c;
        }
}
int output(int o,int x,int y,int z)
{
        printf("%d is smaller than %d,%d and %d",o,x,y,z);
        //return o;
}
int main ()
{
        int o;
        int x;
        int y;
        int z;
        input(&x,&y,&z);
        o=compute(x,y,z);
        output(o,x,y,z);
}
 
