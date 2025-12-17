/*
 * 数组arr、容量capacity、有效长度length，在pos位置插入元素elem，后续元素依次递进。
 * 返回值参考题面要求。
 */
int insert_element(int a[], int capacity, int length, int pos, int elem)
{
    if(capacity<0)return -2;
    if(length<0)return -3;
    if(length>=capacity)return -4;
    if(pos<0)return -5;
    if(pos>length)return -6;
    int i;
    for(i=length;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=elem;
    return length+1;
}