
//multiplication of matrix
#include<stdio.h>
void get_matrix(int m,int n,float a[][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter [%d][%d]th element\n", i,j);
			scanf("%f", &a[i][j]);
		}
	}
}
void show_matrix(int m,int n, float c[][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%f    ",c[i][j]);		
		}
		printf("\n");
	}
}
void mpy_matrix(int m,int n,float a[][n], float b[][n],float c[][n])
{
	int k,i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}

int main()
{
	int m,n;
	printf("enter the order of the matrix");
	scanf("%d%d", &m,&n);
	float a[m][n],b[m][n],c[m][n];
	printf("enter matrix a\n");
	get_matrix(m,n,a);
	printf("enter matrix b\n");
	get_matrix(m,n,b);
	mpy_matrix(m,n,a,b,c);
	show_matrix(m,n,c);
	return 0;
}
