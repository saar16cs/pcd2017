#include<stdio.h>
int add(int a,int b)
{
return (a+b);
}
int main()
{
int a,b,sum;
printf("enter any 2 numbers");
scanf("%d%d", &a,&b);
sum=add(a,b);
printf("sum of %d and %d is %d\n", a,b,sum);
return 0;
}

