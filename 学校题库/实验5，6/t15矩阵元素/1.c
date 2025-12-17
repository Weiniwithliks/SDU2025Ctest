/**
 * 将数组a[]的内容视为“行主序”存储的矩阵，列宽为ncol，返回r行c列处的元素。
 * 说明：C语言的多维数组采用这种存储方式。
 */
int row_major_order(const int a[], int ncol, int r, int c)
{
    return a[r*ncol+c];
}

/**
 * 将数组a[]的内容视为“列主序”存储的矩阵，行高为nrow，返回r行c列处的元素。
 * 提醒：C语言的多维数组“不是”这种存储方式，而是“行主序”。
 *      当与其他语言或函数库交换数据时，可能遇到“列主序”的数据。
 */
int col_major_order(const int a[], int nrow, int r, int c)
{
    return a[nrow*c+r];    
}