#include<stdio.h>
struct complex
{
int a;
char i;
int b;
} c1,c2;
int main()
{
printf("enter first complex number");
scanf("%d+%c%d", &c1.a,&c1.i,&c1.b);
printf("enter 2nd complex number");
scanf("%d+%c%d", &c2.a,&c2.i,&c2.b);
printf("sum of both complex numbers is %d+%c%d\n", (c1.a+c2.a),c2.i,(c1.b+c2.b));
return 0;
}
