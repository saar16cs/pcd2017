//reverse of a number
#include<stdio.h>
#include<math.h>
int reverse(int num)
{
int rev=0;
    while(num!=0)
    {
    rev=rev*10+(num%10);
    num=num/10; 
    }
return rev;      
}
    int main()
    {
    int num, rnum;
    printf("enter a number");
    scanf("%d", &num);
    rnum=reverse(num);
    printf("reverse of %d is %d\n", num, rnum);
    return 0;
    }
