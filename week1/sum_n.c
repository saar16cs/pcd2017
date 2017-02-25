//sum of n numbers
#include<stdio.h>
int main()
{
int i,num[i];
int a,sum=0;
printf("how many numbers you want to add");
scanf("%d", &i);
printf("enter numbers you want to add");
for(a=0;a<=i-1;a++)
{scanf("%d", &num[a]);}
for(a=0;a<=i-1;a++)
{
sum+=num[a];
}
printf("sum of numbers is %d\n", sum);
return 0;
}
