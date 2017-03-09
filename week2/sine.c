#include<stdio.h>
#include<math.h>
float convert_radians(float degree)
{
	float rad;
	rad=(3.1414/180)*degree;
	return rad;
}
	
float compute_sine(float x)
{
	int i;
	float diff,index,sum,prev;
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
	float degree,rad,sine;
	printf("enter the angle:");
	scanf("%f", &degree);
	rad=convert_radians(degree);
	sine=compute_sine(rad);
	printf("sine(%f) = %.6f ---by our method\n", degree, sine);
	printf("sine(%f) = %.6f ---by library function\n", degree, sin(rad));
	return 0;
}
