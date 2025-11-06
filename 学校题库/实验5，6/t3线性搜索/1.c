/*
* 从数组a的[b, e)区间搜索目标值t。返回t在区间内首次出现的位置。
* 若找不到或区间为空则返回结束位置e。
*/
int linear_search(const int a[], int b, int e, int t)
{
    int i;
    for(i=b;i<e;i++)
    {
        if(a[i]==t)return i;
    }
    return e;
}