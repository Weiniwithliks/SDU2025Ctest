/** 
 * 评测环境已经实现了归并函数，你需要调用该函数完成归并操作。
 * 数组a、长度n。数组b、长度m。归并到目标数组w。
 */
void merge(const int a[], const int n, const int b[], const int m, int w[]);

/**
 * 对整型区间[b, e)进行归并排序。区间为左闭右开，不含右端点。
 * 指针b为区间开始位置，指针e为区间结束位置。
 * w[]为调用方提供的工作数组，容量保证不小于(e - b)。
 */
void merge_sort(int* b, int* e, int w[])
{
    if(e-b<=1)return; //区间为空或只有一个元素时自然有序，直接返回即可
    int len=e-b;
    int *mid=b+len/2;
    // 递归排序左右两个子区间
    merge_sort(b,mid,w);
    merge_sort(mid,e,w);
    // 将两个已排序的子区间归并到临时数组w
    merge(b,mid-b,mid,e-mid,w);
    // 将归并结果复制回原数组
    int i;
    for(i=0;i<len;i++)
    {
        b[i]=w[i];
    }
}