#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,c,s;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    s=0.5*fabs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if(fabs(s)<=0.000001)   //一开始用的是s==0.000000，似乎由于精度问题导致某些数据无法判断，遂改之
    {
        printf("-1 -1");
    }
    else
    {
        c=sqrt(pow(x2-x1,2)+pow(y2-y1,2))+sqrt(pow(x3-x1,2)+pow(y3-y1,2))+sqrt(pow(x2-x3,2)+pow(y2-y3,2));
        printf("%.2lf %.2lf",c,s);
    }
    return 0;
}