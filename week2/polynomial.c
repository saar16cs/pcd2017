#include<stdio.h>
int polynomial(int a[], int x, int n)
	{
	int sum=0,i;
	for(i=n-1;i>0;i--)
		{
		sum=(sum+a[i])*x;
		}	
	return sum+a[0];
	}

int get_polynomial()
{
	int a;
	
	scanf("%d", &a);
	return a;
}

int main()
{
	int n,x,sum,i;
	printf("enter the order of polynomial");
	scanf("%d", &n);
	int a[n+1];
	printf("enter the coefficients");
	for(i=n;i>=0;i--)
	{
		a[i]=get_polynomial();
	}
	printf("enter x");
	scanf("%d", &x);
	sum=polynomial(a,x,n+1);
	printf("%d",sum);
	return 0;
}
