#include<stdio.h>
#include<math.h>
float sqroot(float num)
{
    float i=1,j,diff;
    diff=num;
    for(;diff>0.00001;)
    {
        j=i-(pow(i,2)-num)/(2*i);
        i=j;
        diff=pow(j,2)-num;
    }
    return j;
}

int main()
{
    float num,x;
    printf("enter a number");
    scanf("%f",&num);
    x=sqroot(num);
    printf("square root of %.3f is : %.3f\n", num, x);
    printf("square root of %.3f using library function is: %.3f\n", num, sqrt(num));
    return 0;
}
