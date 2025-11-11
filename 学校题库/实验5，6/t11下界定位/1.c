/*
 * 数组a、区间开始位置b、结束位置，目标值t。
 * 返回值参考题面要求。
 */
int lower_bound(const int a[], int b, int e, const int t)
{
    while (b<e)
    {
        int k=b+(e-b)/2;
        if(a[k]>=t)   //中点比t大
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