//multiplication of 2*2 matrix
#include<stdio.h>
const int m;
const int n; 
int get_matrix(int i,int j)
{
    int num;
    printf("enter [%d][%d] element",i,j);
    scanf("%d",&num);
    return num;    
}


int main()
{
    int i,j,m,n;
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
        int c[m][n];
   
      for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            c[i][j]=(a[0][i]*b[0][j])+(a[i][1]*b[1][j]);
        }
    }  
        for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("{%d ", c[i][j]);
        }
        printf("}\n");
    } 
    return 0;   
}
