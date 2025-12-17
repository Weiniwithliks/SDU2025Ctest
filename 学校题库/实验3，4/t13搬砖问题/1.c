#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int answer=0;
    int i=0;
    while (i<=n/5+1)
    {
        if((n-5*i)%3==0&&(n-5*i)>=0&&(n-i-((n-5*i)/3))%2==0)answer++;       //一开始忘记判断女人人数>=0导致部分错误
        i++;
    }
    printf("%d",answer);
    return 0;
}
//只有一层循环 我是最棒的小羊