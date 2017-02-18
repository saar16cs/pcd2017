#include<stdio.h>
int main()
{
struct complex
{
int real;
int imaginary;
};
struct complex c[2];
printf("enter first complex number");
scanf("%d+i%d",&c[0].real,&c[0].imaginary);
printf("enter 2nd complex number");
scanf("%d+i%d", &c[1].real,&c[1].imaginary);
printf("sum of both complex numbers is %d+i%d\n", (c[0].real+c[1].real),(c[0].imaginary+c[1].imaginary));
return 0;
}
