/** 
 * 评测环境已经实现了划分函数，你只需且必须调用该函数完成数组划分。
 * 待划分的区间起始位置b、结束位置e。区间为左闭右开，不含右端元素。
 * 返回划分后的枢轴位置。若区间为空或无效，返回结束位置e。
 */
int* partition(int* b, int* e);

/**
 * 对整型区间[b, e)实现快速排序算法。区间为左闭右开，不含右端点。
 * 指针b为区间开始位置，指针e为区间结束位置。
 */
void quicksort(int* b, int* e)
{
    if(e-b<=1)return;
    int *p=partition(b,e);
    quicksort(b,p);
    quicksort(p,e);
}