long long mod_pow(long long b, long long n, long long m)
{
    // 根据模幂运算性质：b? mod m = ((b mod m)?) mod m
    long long result=1;
    b=b%m;
    if(n==0)  //加入了n=0时的判断，处理一些边界问题
    {
        return 1%m;
    }
    while (n>0)
    {
        if(n&1)  //n&1=1代表n是奇数
        {
            result=(result*b)%m;
        }
        b=(b*b)%m;
        n>>=1;  //等价于n/2但是更快
    }
    return result;
}
/*    
long long llpow(long long x,long long y)
{
    long long i,op=1;
    for(i=1;i<=y;i++)
    {
        op=op*x;
    }
    return op;
}
long long mod_pow(long long b, long long n, long long m) //输出b^n%m的整数结果
{
    long long result,temp;
    if((n&1)==0)
    {
        temp=llpow(b*b,n/2);
    }
    else
    {
        temp=llpow(b*b,(n-1)/2)*b;
    }
    result=temp%m;
    return result;
}
*/