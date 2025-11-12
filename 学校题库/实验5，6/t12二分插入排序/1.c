// 只需且必须调用评测环境提供的下列函数实现功能。

// 在数组a[b, e)搜索目标t，返回首个大于t的元素位置。若找不到则返回e。
int upper_bound(const int a[], int b, int e, const int t);

// 在数组a[pos]处插入元素elem，原有[pos, length)的元素依次后移一位。
int insert_element(int a[], int length, int pos, int elem);

void binary_insertion_sort(int a[], int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        insert_element(a, i,upper_bound(a, 0, i, a[i]), a[i]);
    }
}