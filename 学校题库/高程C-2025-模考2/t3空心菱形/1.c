#include<stdio.h>
int main()
{
    char c;
    int a;
    scanf("%c%d",&c,&a);
    int i,k;
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=a-i;k++)
        {
            printf(" ");
        }
        printf("%c",c);
        if(i==1)printf("\n");
        else
        {
            for (k=0;k<2*i-3;k++)
            {
                printf(" ");
            }
            printf("%c\n",c);
        }
    }
    for(i=a-1;i>=1;i--)
    {
        for(k=1;k<=a-i;k++)
        {
            printf(" ");
        }
        printf("%c",c);
        if(i==1)printf("\n");
        else
        {
            for (k=0;k<2*i-3;k++)
            {
                printf(" ");
            }
            printf("%c\n",c);
        }
    }
    return 0;
}
