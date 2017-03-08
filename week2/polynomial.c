#include<stdio.h>
int polnomial(int a[], int x)
	{
	int sum=0,i;
	for(i=n;i>0;i--)
		{
		sum=(sum+a[i])*x;
		}	
	return sum+a[0];
	}

int get_polynomial(int n)
{
	int a;
	pritnf("enter the coefficients");
	scanf("%d", a);
}

int main()
{
int n,x;
	printf("enter the order of polynomial");
	scanf("%d", &n);
int a[n+1];
	for(i=n;i>=0;i--)
	{
		a[i]=get_polynomial(n);
	}
	printf("enter x");
	scanf("%d", &x);
	sum=polynomial(a,x);
	printf("%d",sum);
	return 0;
}
