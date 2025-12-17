/*
* 交换数组a位于i和j处的两个元素。
*/
void swap_elements(int a[], int i, int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}