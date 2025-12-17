/*
* 计算第n项斐波那契数F(n)。
*/
unsigned long long fibonacci(int n)
{
    if(n==0)return 0;
    else if(n==1)return 1;
    else
    {
        unsigned long long pre1=0,pre2=1,result;
        int i;
        for(i=2;i<=n;i++)
        {
            result=pre1+pre2;
            pre1=pre2;
            pre2=result;
        }
        return result;
    }
}