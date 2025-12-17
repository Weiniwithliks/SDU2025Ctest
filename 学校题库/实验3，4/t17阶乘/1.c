/*
* 计算整数 n 的阶乘。
*/
long long factorial(int n)
{
    if(n==0)return 1;
    else
    {
        int i;
        long long result=1;
        for(i=1;i<=n;i++)
        {
            result*=i;
        }
        return result;
    }
}