// 评测环境提供了以下三个函数，你只需且必须调用它们，无需定义或实现。
// 交换数组a在下标i和j处的两个元素。
void swap_elements(int a[], int i, int j);

// 返回数组a的[beg, end)区间内的最小元素首次出现的下标（索引）
int min_element(int a[], int beg, int end);

// 该函数实现了题目要求的输出格式，直接调用即可。
void print(int a[], int n);

/*
 * 按照题目要求实现“选择排序”，将数组a重排为升序。
*/
void selection_sort(int a[], int n)
{
    int i,u;
    for(i=0;i<n-1;i++)  //最后一次自然有序，只需循环n-1次，不然样例未过（虽然结果相同）
    {
        u=min_element(a,i,n);
        swap_elements(a,i,u);
        print(a,n);
    }
}