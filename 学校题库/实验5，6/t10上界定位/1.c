/*
 * 数组a、区间开始位置b、结束位置e，目标值t。
 * 返回值参考题面要求。
 */
/* 非常好懂的递归算法，然后超时啦哈哈哈哈哈(没疯)
int upper_bound(const int a[], int b, int e, const int t)
{
    if(a[e-1]<=t)return e;
    int k=b+(e-b)/2;
    return (a[k]>t)?upper_bound(a,b,k,t):upper_bound(a,k,e,t);
}
*/
int upper_bound(const int a[], int b, int e, const int t)
{
    while (b<e)
    {
        int k=b+(e-b)/2;
        if(a[k]>t)   //中点比t大
        {
            e=k; //收缩右边界
        }
        else  //中点比t小
        {
            b=k+1;  //收缩左边界
        }
    }
    return b;
}
