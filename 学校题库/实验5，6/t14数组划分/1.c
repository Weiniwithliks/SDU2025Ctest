int partition(int a[], int b, int e)
{
    int pivot=a[b];
    int i=b,j=e-1;    
    while (i<j)
    {
        while(i<j&&a[j]>=pivot)j--;    //右侧找小的
        if(i<j)a[i++]=a[j];            //填坑，i前进
        while (i<j&&a[i]<=pivot)i++;   //左侧找大的
        if(i<j)a[j--]=a[i];            //填坑，j后退
    }
    a[i]=pivot;                        //最后的坑放枢轴
    return i;
}