#include<stdio.h>
#include<math.h>
double convert_radians(double degree)
{
	double rad;
	rad=(3.1414/180)*degree;
	return rad;
}
	
double compute_sine(double x)
{
	int i;
	double diff,index,sum,prev;
	index=sum=x;
	diff = fabs(x); 
	for(i=3;diff>0.00001;i=i+2)
	{	
		//prev=sum;
		index=(-index*x*x)/(i*(i-1));
		diff=fabs(index);
		sum=sum+index;
	}
	return sum;
}

int main()
{
	double degree,rad,sine;
	printf("enter the angle:");
	scanf("%lf", &degree);
	rad=convert_radians(degree);
	sine=compute_sine(rad);
	printf("sine(%lf) = %.6lf ---by our method\n", degree, sine);
	printf("sine(%lf) = %.6lf ---by library function\n", degree, sin(rad));
	return 0;
}
