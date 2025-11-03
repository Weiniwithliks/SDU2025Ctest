#include<stdio.h>
int main()
{
    int N,min,i,temp;
    scanf("%d\n%d",&N,&min);
    for(i=2;i<=N;i++)
    {
        scanf("%d",&temp);
        min=(temp<=min)?temp:min;
    }
    printf("%d",min);
    return 0;
}