//multiplication of matrix
#include<stdio.h>
const int n,m;
int get_matrix(int i,int j)
{
    int num;
    printf("enter [%d][%d] element",i,j);
    scanf("%d",&num);
    return num;    
}

void print_matrix(int a[][n],int b[][n],int m,int n)
{   
    int c[m][n];
    int i,j,k,sum;
      for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {   sum=0;
            for(k=0;k<=m-1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }  printf("c=a*b=\n");
        for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("{%d ", c[i][j]);
        }
        printf("}\n");
    }
}

int main()
{
    int i,j;
    printf("enter the order of matrix in format a*b");
    scanf("%d*%d",&m,&n);
    int a[m][n],b[m][n];
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            a[i][j]=get_matrix(i,j);
        }
    }
    printf("enter another matrix\n");
      for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            b[i][j]=get_matrix(i,j);
        }
    }
    print_matrix(a,b,m,n); 
    return 0;   
}
