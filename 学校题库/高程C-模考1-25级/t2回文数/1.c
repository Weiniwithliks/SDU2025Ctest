#include<stdio.h>
#include<math.h>
int pdhw(int ip);
int main()
{
    int temp;
    while (scanf("%d",&temp)!=EOF)
    {
        if(pdhw(temp))printf("1 %d\n",temp);
        else printf("0 %d\n",temp);
    }
    return 0;
}
int pdhw(int ip)
{
    int k=0,i;
    int c=ip;
    int count=0;
    while (c>0)
    {
        count++;
        c=c/10;
    }
    int a[count];
    c=ip;
    while (c>0)
    {
        a[k]=c%10;
        k++;
        c=c/10;
    }
    int number=0;
    for(i=0;i<count;i++)
    {
        number=number+a[i]*pow(10,count-1-i);
    }
    if(ip==number)return 1;
    else return 0;
}
