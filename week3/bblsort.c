//bubble sort
#include<stdio.h>

void sort(int a[],int n)
{
    int i,j,temp=0;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,i,j;
    printf("how many numbers you want to enter");
    scanf("%d", &n);
    int a[n];
    printf("enter the numbers");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d", &a[i]);       
    }
    sort(a,n);
    for(i=0;i<=n-1;i++)
    {
        printf("%d,", a[i]);
    }
    return 0;
}
