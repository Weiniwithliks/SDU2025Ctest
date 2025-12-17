/*
 * 数组a、长度n。数组b、长度m。目标数组c。
*/
void merge_array(const int a[], const int n, const int b[], const int m, int c[])
{
    int na=0,nb=0,nc=0;
    while(na<n&&nb<m)
    {
        if(a[na]<b[nb])
        {
            c[nc]=a[na];
            nc++;
            na++;
        }
        else
        {
            c[nc]=b[nb];
            nc++;
            nb++;
        }
    }
    if(na==n&&nb==m)return;
    else if(na==n)
    {
        int i;
        for(i=nb;i<m;i++)
        {
            c[nc]=b[i];
            nc++;
        }
    }
    else if(nb==m)
    {
        int k;
        for(k=na;k<n;k++)
        {
            c[nc]=a[k];
            nc++;
        }
    }
    return;
}