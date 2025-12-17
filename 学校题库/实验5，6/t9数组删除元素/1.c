/*
 * 数组arr、有效长度length，删除pos位置的元素，后续元素依次前移。
 * 返回值参考题面要求。
 */
int remove_element(int a[], int length, int pos)
{
    if(length<=0)return -2;
    if(pos<0)return -3;
    if(pos>=length)return -4;
    int i;
    for(i=pos;i<length-1;i++)
    {
        a[i]=a[i+1];
    }
    return length-1;
}