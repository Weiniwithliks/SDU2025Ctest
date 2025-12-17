#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int isry(int y);
int day(int y,int month,int day);
int main()
{
    int year,month1,day1,month2,day2;
    scanf("%d%d%d%d%d",&year,&month1,&day1,&month2,&day2);
    int result=abs(day(year,month1,day1)-day(year,month2,day2));
    printf("%d",result);
    return 0;
}
int isry(int y)
{
    if(y%400==0)return 1;
    else if(y%100!=0&&y%4==0)return 1;
    return 0;
}
int day(int y,int month,int day)
{
    int dat_of_month[]={31,28+isry(y),31,30,31,30,31,31,30,31,30,31};
    int i;
    int sum=day;
    for(i=0;i<month-1;i++)sum+=dat_of_month[i];
    return sum;
}
/* #include<stdio.h>
int rnpd(int Y)
{
  int op;
  if(Y%100==0)
    {
      if(Y%400==0)
        {
          op=1;
        }
      else
        {
          op=0;
        }
    }
  else
    {
      if(Y%4==0)
        {
          op=1;
        }
      else
        {
          op=0;
        }
    }
  return op;
}
int day(int year,int month)
{
  switch(month)
    {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12: return 31;
      case 4:
      case 6:
      case 9:
      case 11: return 30;
      case 2: return 28+rnpd(year);       
    }
}
int main()
{
  int Y,M,D,E,F,em,ed,lm,ld;
  scanf("%d%d%d%d%d",&Y,&M,&D,&E,&F);
  if(M<E)
    {
      em=M;
      ed=D;
      lm=E;
      ld=F;
    }
  else if(M>E)
    {
      lm=M;
      ld=D;
      em=E;
      ed=F;
    }
  else
    {
      if(D<F)
        {
          em=M;
          ed=D;
          lm=E;
          ld=F;
        }
      else
        {
         lm=M;
         ld=D;
         em=E;
         ed=F; 
        }    
    }
  //参数预处理，区分较早的日期和晚的
  //正式计算
  int i,sum=0;
  for(i=em;i<lm;i++)
    {
      sum=sum+day(Y,i);
    }
  sum=sum+ld-ed;
  printf("%d",sum);
  return 0;
} */