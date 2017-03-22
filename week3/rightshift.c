#include<stdio.h>

unsigned int rightshift(unsigned int x, unsigned int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(x%2==0)
		{
			x>>1;
		}
		else
		{
			x=x>>1;
			x=x+(1<<31);
		}
	}
	return x;
}

int main()
{
	unsigned int x,n,result;
	printf("enter x");
	scanf("%u", &x);
	printf("enter how many times you want to rotate");
	scanf("%u", &n);
	result=rightshift(x,n);
	printf("%u", result);
	return 0;
}
