#include<stdio.h>
typedef long long ll;
int main()
{
    ll N,S,T;                                  //N是张量维数
    scanf("%lld%lld%lld",&N,&S,&T);
    ll d[N];
    int i=0;
    while (i<N)scanf("%lld",&d[i++]);             //读取各维度大小
    int k=0;
    i=0;                                        //把i重置一下
    ll sample[N];
    ll stride[N];
    stride[N-1]=1;
    for(k=N-2;k>=0;k--)
    {
        stride[k]=stride[k+1]*d[k+1];
    }
    k=0;
    while (k<T)
    {
        while (i<N)scanf("%lld",&sample[i++]);    //读取测试用例
        i=0;                                    //把i重置一下
        ll sum=0;
        ll j;
        for(j=0;j<N;j++)
        {
            sum=sum+sample[j]*stride[j];
        }
        printf("%lld\n",sum*S);
        k++;
    }
    return 0;
}