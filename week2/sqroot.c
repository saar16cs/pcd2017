#include<stdio.h>
#include<math.h>
float sqroot(float num)
{
    float x,y;
    x=num;
    y=1;
    while(num>y)
    {
        num=(num+y)/2;
        y=x/num;
    } 
    return y;
}

int main()
{
float num,x;
printf("enter the number");
scanf("%f",&num);
x=sqroot(num);
printf("square root of %.2f is %.2f\n",num,x);
printf("square root of %.2f is %.2f\n",num,sqrt(num));
return 0;
}
