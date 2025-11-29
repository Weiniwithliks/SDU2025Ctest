#include<stdio.h>
int main()
{
    int N;
    long long sum=0;
    scanf("%d",&N);
    int i;
    for(i=1;i<=N;i++)
    {
        long long temp;
        scanf("%lld",&temp);
        sum=sum+temp;
        printf("%lld%s",sum,i!=N?" ":"");
    }
    return 0;
}