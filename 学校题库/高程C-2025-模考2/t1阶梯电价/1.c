#include<stdio.h>
double df(int a);
int main()
{
    double sum=0;
    int n,temp;
    for(n=1;n<=12;n++)
    {
        scanf("%d",&temp);
        sum+=df(temp);
    }
    printf("%.2lf",sum);
}
double df(int a)
{
    double result=0;
    if(a<=210)result=a*0.5469;
    else if(a<=400)result=a*(0.5469 + 0.05);
    else result=a*(0.5469 + 0.30);
    return result;
}
