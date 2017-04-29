#include<stdio.h>

void strcopy(char str1[15],char str2[15])
{
    char temp[15];
    int i;
    for(i=0;i<15;i++)
    {
        temp[i]=str1[i];
    }
        for(i=0;i<15;i++)
    {
        str1[i]=str2[i];
    }
        for(i=0;i<15;i++)
    {
        str2[i]=temp[i];
    }
    printf("string1=%s \n string2=%s",str1,str2);
}

int main()
{
    char str1[15],str2[15];
    printf("enter string1\n");
    scanf("%s",str1);
    printf("enter string2\n");
    scanf("%s",str2);
    printf("string1=%s \n string2=%s\n",str1,str2);
    printf("strcpy functions runs\n");
    strcopy(str1,str2);
    return 0;
}
