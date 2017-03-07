#include<stdio.h>
#include<math.h>
int roots(int a,int b,int c)
    {
    int d,e;
        d=(b*b)-(4*a*c);
        e=sqrt(d);
        if(a=0)
        {return 0;}
        else if(d=0)
        {return -b/2*a;}
        else if(d>0)
        {return ((-b+e)/(2*a)) && ((-b-e)/(2*a));}
        else if(d<0)
        {
    return 1;
        }
    }
int main()
{
int a,b,c,e,d,k;
printf("enter the quadratic equation\n");
scanf("%dx^2+%dx+%d", &a,&b,&c);
d=(b*b)-(4*a*c);
e=sqrt(d);
k=roots(a,b,c);
if(k=0)
{printf("invalid equation");}
else if(k=1)
{printf("roots are imaginary:%d+%di, %d+%di\n", (-b/2*a),(e/2*a),(-b/2*a),(-e/2*a));}
else
{printf("roots are real:%d\n", k);}
return 0;
}
