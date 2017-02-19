#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e;
printf("enter the quadratic equation as ax^2+bx+c where a,b,c are constants");
scanf("%fx2+%fx+%f", &a,&b,&c);
if(a*b*c==0)
{printf("invalid quadratic equation");}
else
{
d=(b*b)-(4*a*c);
e=sqrt(d);
if(e>=0)
{
printf("real roots are %f and %f\n", (-b+e)/(2*a), (-b-e)/(2*a));
}
else
{printf("roots are imaginary");}
}
return 0;
}
