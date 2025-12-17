#include<stdio.h>
int pd(unsigned long long ip);
int main()
{
    int t;
    scanf("%d",&t);
    unsigned long long a[t];
    int i;
    for(i=0;i<t;i++)
    {
        scanf("%llu",&a[i]);
    }
    int k;
    for(k=0;k<t;k++)
    {
        if(pd(a[k]))
        {
            printf("Y %llu\n",a[k]);
        }
        else
        {
            printf("N %llu\n",a[k]);
        }
    }
    return 0;
}
int pd(unsigned long long ip) //判断是不是2的幂
{
    if(ip==0)return 0;
    int op=0;
    while (1)
    {
        if (ip==1)
        {
            op=1;
            break;
        }
        else if (ip%2!=0)
        {
            op=0;
            break;
        }
        else if(ip%2==0)
        {
            ip=ip/2;
            continue;
        }
    }
    return op;
}
