#include<stdio.h>
#include<stdlib.h>
void read(int **p,int m,int n)
{
     int i,j;
     //read elements in row major order
     for(i=0;i<m;i++)
     {
          for(j=0;j<n;j++)
          {
               scanf("%d",&p[i][j]);
          }
     }
}
//funtion to rotate matrix by 90 degrees
void rotate(int **p,int m,int n)
{
     int i,j;
     for(i=0;i<m/2;i++)
     {
          for(j=0;j<n;j++)
          {  
                  p[i][j]+=p[m-1-i][j];
                  p[m-1-i][j]=p[i][j]-p[m-1-i][j];
                  p[i][j]=p[i][j]-p[m-1-i][j];   
          }
     }
     m=m+n;
     n=m-n;
     m=m-n;
     for(i=0;i<m;i++)
     {
          for(j=i;j<n;j++)
          {  
               if(i!=j)
               {
                    p[i][j]+=p[j][i];
                    p[j][i]=p[i][j]-p[j][i];
                    p[i][j]=p[i][j]-p[j][i];    
               } 
          }
     }
}
void display(int **p,int m,int n)
{
     int i,j;
     for(i=0;i<m;i++)
     {
          for(j=0;j<n;j++)
          {
               printf("%d\t",p[i][j]);
          }
          printf("\n");
     }
}
int main()
{
     int m,n;
     printf("enter order of matrix:\n");
     scanf("%d%d",&m,&n);//read order of matrix
     int **p;
     p=(int **)malloc(sizeof(int*)*m);
     int i,j;
     for(i=0;i<m;i++)
     {
          p[i]=(int *)malloc(sizeof(int)*n);
     }
     printf("enter matrix in row major order:\n");
     read(p,m,n);//read function call
     printf("enterd array is :\n");
     display(p,m,n);//display function call
     rotate(p,m,n);//rotate function call
     printf("\n\nafter rotation:\n");
     display(p,n,m);//display function call
     return 0;
}
