#include<stdio.h>
unsigned long long gcd(unsigned long long x,unsigned long long y)
{
    while (y)
    {
        unsigned long long t=y;
        y=x%y;
        x=t;
    }
    return x;
}
int main()
{
    unsigned long long a,b;
    scanf("%llu%llu",&a,&b);
    unsigned long long result=a*b/gcd(a,b);
    printf("%llu",result);
    return 0;
}






















/*
#include <stdio.h>
#include <stdlib.h>

long long gcd_ll(long long x, long long y) {
    x = llabs(x); y = llabs(y);
    while (y) {
        long long t = y;
        y = x % y;
        x = t;
    }
    return x;
}

void print_u128(unsigned __int128 v)
{
    if(v == 0){putchar('0');return;}
    char buf[50];int i=0;
    while(v>0){
        buf[i++]='0'+(int)(v%10);
        v/=10;
    }
    while(i--)putchar(buf[i]);
}
int main(void)
{
    long long a,b;
    if(scanf("%lld%lld",&a,&b)!=2)return 0;
    long long aa=llabs(a),bb=llabs(b);
    if (aa==0||bb==0)
    {
        printf("0\n");
        return 0;
    }
    long long g=gcd_ll(aa, bb);
    // 先除后乘，使用128位保存结果以避免64位溢出
    unsigned __int128 l=(unsigned __int128)(aa/g)*(unsigned __int128)bb;
    print_u128(l);
    putchar('\n');
    return 0;
}
*/
