#include<stdio.h>
int add(int a, int b,int c)
{
return a+b+c;
}
int main()
{
int a,b,c,sum;
printf("enter any three numbers");
scanf("%d%d%d", &a,&b,&c);
sum=add(a,b,c);
printf("sum of %d,%dand%d is %d\n", a,b,c,sum);
return 0;
}

