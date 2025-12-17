#include<stdio.h>
int max(int x,int y)
{
    if(x>y)return x;
    else return y;
}
int min(int x,int y)
{
    if(x<y)return x;
    else return y;
}
/*                                              //原gp函数，暴力枚举时间复杂度O(n^2)超时啦
int gp(int a,int b[])
{
    int i,j,wel=b[1]-b[0];
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            wel=max(wel,b[j]-b[i]);
        }
    }
    return wel;
}
*/
int gp(int a,int b[])
{
    if(a==1)
    {
        return b[0];
    }
    else
    {
        int nowmin=b[0],wel=b[1]-b[0],k;
        for(k=1;k<a;k++)
        {
            wel=max(wel,b[k]-nowmin);
            nowmin=min(nowmin,b[k]);
        }
        return wel;
    }
}
int main()
{
    int count=0;
    int n;
    int lr[10];
    while (count<10)
    {
        if(scanf("%d",&n)==EOF)break;
        else
        {
            int k=0;
            int b[n];
            for(k=0;k<n;k++)
            {
                scanf("%d",&b[k]);
            }
        lr[count]=gp(n,b);
        count++;
        }
    }
    int h;
    for(h=0;h<count;h++)
    {
        printf("%d\n",lr[h]);
    }
    return 0;
}
