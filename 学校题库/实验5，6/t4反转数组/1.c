#include<stdio.h>
void reverse_array(int a[], int b, int e)
{
    void th(int a[],int i1,int i2);
    int k;
    for(k=0;k<(e-b)/2;k++)  //原本写的k<=(e-b)/2,导致循环多了一次
    {
        th(a,b+k,e-1-k);
    }
    /* 调试用
    int i;
    for(i=b;i<e;i++)printf("%d%s",a[i],i==e-1?"\n":" ");
    */
}
void th(int a[],int i1,int i2)
{
    int tp;
    tp=a[i1];
    a[i1]=a[i2];
    a[i2]=tp;
}
/*  //调试用
int main()
{
    int a[]={0,0,20,50,20,30,9};
    reverse_array(a,2,6);
    return 0;
}
*/