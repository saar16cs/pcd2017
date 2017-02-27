//sum of n complex numbers
#include<stdio.h>
struct complex{
float real;
float imaginary;
};
struct complex getcomplex()
{
struct complex c;
printf("enter complex number");
scanf("%f+i%f", &c.real, &c.imaginary);
return c;
}
struct complex add(struct complex x)
{
struct complex sum;
sum.real=sum.real+x.real;
sum.imaginary=sum.imaginary+x.imaginary;
return sum;
}
void printcomplex(struct complex sum)
{
printf("sum is %f+i%f\n", sum.real,sum.imaginary);
}
int main()
{
struct complex sum;
int i,n;
printf("how many complex numbers you want to add");
scanf("%d", &n);
struct complex num[n];
for(i=0;i<=n-1;i++)
{
num[i]=getcomplex();
}
for(i=0;i<=n-1;i++)
{
sum=add(num[i]);
}
printcomplex(sum);
return 0;
}
