/*
* 将n按十进制逐位逆转，返回结果。
*/
unsigned long long pown(int a)
{
    unsigned long long result=1;
    int j;
    for(j=0;j<a;j++)
    {
        result=result*10;
    }
    return result;
}
unsigned long long reverse_integer(int n)
{
    int a[20];
    int i=0;
    while(n>0)
    {
        a[i]=n%10;
        n=n/10;
        i++;
    }
    unsigned long long result=0;
    int k;
    for(k=0;k<i;k++)
    {
        result=result+a[k]*pown(i-1-k);
    }
    return result;
}