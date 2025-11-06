/*
* 使用题面描述的“冒泡排序”算法，将长度为n的数组a重排为升序。
*/
void swap_elements(int a[], int i, int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void Prt(int *a,int n)     //打印现在的数组
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d%s",a[i],i==n-1?"\n":" ");
    }
}
void bubble_sort(int a[], int n)
{
    int k,m;
    for(k=0;k<n-1;k++)
    {
        int is=0;
        for(m=0;m<n-1-k;m++)
        {
            if(a[m]>a[m+1])
            {
                swap_elements(a,m,m+1);
                is=1;
            }
        }
        if(is==0)break;
        else Prt(a,n);
    }
}