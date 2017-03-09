#include<stdio.h>
int leapyr(int year)
{
    if(year%400==0)
    {
        return 0;
    }
    else if(year%100==0)
    {
        return 1;
    }
    else if(year%4==0)
    {
        return 2;
    }
    else
    {
        return -1;
    }
}

int main()
{   
    int year,x;
    printf("enter year");
    scanf("%d", &year);
    x=leapyr(year);
    switch(x)
    {
        case 0:
        printf("%d is quadrenal leap year", year);
        break;
        case 1:
        printf("%d is century but not a leap year", year);
        break;
        case 2:
        printf("%d is a leap year", year);
        break;
        case -1:
        printf("%d is not a leap year", year);
        break;
        default :
        break;
    }
    return 0;
}
