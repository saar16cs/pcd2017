#include<stdio.h>
#include<math.h>
float sum_(float *num,int n)
{
	float s=0;
	int i;
	for(i=0;i<n;i++)
	{
		s=s+*(num+i);
	}
	return s;
}

float mean_(float *num,int n)
{
	float m=0;
	int i;
	for(i=0;i<n;i++)
	{
		m=m+*(num+i);
	}
	m=m/n;
	return m;
}

float mean_deviation(float m,float *num,int n)
{
	float dev,d,e=0;
	int i;
	for(i=0;i<n;i++)
	{
	d=fabs(*(num+i)-m);
	e=e+d;
	}
	dev=e/n;
	return dev;
}

int main()
{
	int n,i;
	float sum,mean,meandev;
	printf("how many numbers you want to enter?");
	scanf("%d", &n);
	float num[n];
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
	scanf("%f",&num[i]);
	}
	sum=sum_(num,n);
	mean=mean_(num,n);
	meandev=mean_deviation(mean,num,n);
	printf("sum of entered numbers is %f\n", sum);
	printf("mean of entered numbers is %f\n", mean);
	printf("mean deviation is %f", meandev);
	return 21;	
}

