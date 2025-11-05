#include<stdio.h>
void insert(int *a,int k,int j); //把数组的第j个数移到第k个，并把后面的后移一位
void Prt(int *a,int n);          //打印现在的数组
int main()   //插入排序
{
    int n;
    scanf("%d",&n);    //读取数字个数
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);   //读取所有数组并保存在数组里
    }
    int cont,h;
    for(cont=1;cont<n;cont++)
    {
        for(h=0;h<cont;h++)
        {
            if(a[cont]<=a[h])  
            {
                insert(a,h,cont);
                Prt(a,n);
                break;
            }
            else if(h==cont-1) Prt(a,n);  //根据题目要求，已经有序也输出一下
        }
    }
    return 0;
}
void insert(int *a, int k, int j)  //把数组的第j个数移到第k个，并把后面的后移一位
{
    if (k==j) return;          //同一位置不用动
    int tmp=a[j];              //把要挪的元素先拎出来
    int i;              
    for (i=j;i>k;--i)          //从后往前整体右移一位
    {
        a[i]=a[i - 1];
    }      
    a[k]=tmp;                //放到新位置
}
void Prt(int *a,int n)     //打印现在的数组
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d%s",a[i],i==n-1?"\n":" ");
    }
}
