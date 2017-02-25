//sum of n complex numbers
#include<stdio.h>
    struct complex{
    float real;
    float imaginary;  
    };
int main()
{
int i,n;
printf("how many complex numbers you want to add");
scanf("%d",&n);
struct complex c[n];
printf("enter complex numbers you want to add");
for(i=0;i<=(n-1);i++)
{
scanf("%f+i%f", &c[i].real,&c[i].imaginary);
}
float a=0,b=0;
for(i=0;i<=(n-1);i++)
{
a=a+c[i].real;
b=b+c[i].imaginary;
}
printf("sum is %.2f+i%.2f", a,b);
return 0;
}
