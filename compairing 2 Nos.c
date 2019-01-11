error: expected identifier or ‘(’ before ‘if’
 if(a<b)
 ^~
comparision.c:20:1: error: expected identifier or ‘(’ before ‘else’
 else
 ^~~~
 I rectified this error by adding a {}.
comparision.c:22:17: warning: missing terminating " character
   printf("%d",&b");
                 ^
Error was rectified by removing ".                 
 error: too few arguments to function ‘output’
   output(c);
   ^~~~~~
Error was retified by adding variables x,y.
          
    ‘a’ undeclared (first use in this function)
 if(a<b)
    ^
comparision.c:13:4: note: each undeclared identifier is reported only once for each function it appears in
comparision.c:13:6: error: ‘b’ undeclared (first use in this function)
 if(a<b)
Error was rectified by declaring a,b in compute function.  
          comparision.c:34:3: error: too few arguments to function ‘output’
   output(z);
   ^~~~~~
   Error was rectied by returning x,y also.
          

comparision.c: In function ‘main’:
comparision.c:33:9: warning: passing argument 1 of ‘input’ makes pointer from integer without a cast [-Wint-conversion]
   input(x,y);
         ^
comparision.c:4:5: note: expected ‘int *’ but argument is of type ‘int’
 int input(int *a,int *b)
     ^~~~~
comparision.c:33:11: warning: passing argument 2 of ‘input’ makes pointer from integer without a cast [-Wint-conversion]
   input(x,y);
           ^
Error was rectified by adding & inoder to scan the content prestent in the variables.
          int input(int *a,int *b)
{
                printf("enter the value of a");
                scanf("%d",a);
                printf("enter the value of b");
                scanf("%d",b);
}

int compute(int a, int b)
{
if(a<b)
{
                printf("a is smaller");
                return a;
}

else
{
                printf("b is smaller");
                return b;
}
}
int output(int x,int y,int z)
{
                printf("%d is smaller than %d and %d",z,x,y);
                return z;
}

int main()
{
                int x,y,z;
                input(&x,&y);
                z=compute(x,y);
                output(x,y,z);
                return x,y,z;
}

          
          
