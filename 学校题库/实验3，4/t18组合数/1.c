// 此处可以定义辅助函数。
unsigned long long factorial(int n)       //计算阶乘
{
    if(n==0)return 1;
    else
    {
        int i;
        unsigned long long result=1;
        for(i=1;i<=n;i++)
        {
            result*=i;
        }
        return result;
    }
}
/*
* 计算组合数C(n, k)，即从n个不同元素选出k个的组合方案数量。
*/
long long comb(int n, int k)
{
    long long result=factorial(n)/(factorial(k)*factorial(n-k));           
    return result;
}