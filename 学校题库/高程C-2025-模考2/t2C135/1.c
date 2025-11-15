#include<stdio.h>
typedef long long ll;
ll three(ll o1,char c1,ll o2);
ll five(ll o1,char c1,ll o2,char c2,ll o3);
int main()
{
    char line[128];
    fgets(line, sizeof(line), stdin);
    int space=0;
    for (int i=0;line[i]!='\0';i++)
    {
        if (line[i]==' ') 
        {
        space++;
        }
    }
   long long result;
    long long a,b,c;
    char s1,s2;
    if (space==0)
    {
        sscanf(line,"%lld",&a);
        result=a;
    }
    else if(space==2)
    {
        sscanf(line,"%lld %c %lld",&a,&s1,&b);
        result=three(a,s1,b);
    }
    else if(space==4)
    {
        sscanf(line,"%lld %c %lld %c %lld",&a,&s1,&b,&s2,&c);
        result = five(a,s1,b,s2,c);
    }
    printf("%lld\n", result);
    return 0;
}
ll three(ll o1,char c1,ll o2)
{
    ll rt;
    switch (c1)
    {
    case '+':rt=o1+o2;break;
    case '-':rt=o1-o2;break;
    case '*':rt=o1*o2;break;
    case '/':rt=o1/o2;break;
    case '%':rt=o1%o2;break;
    default: break;
    }
    return rt;
}
ll five(ll o1,char c1,ll o2,char c2,ll o3)
{
    ll result;
    ll temp=0;
    if((c1=='+'||c1=='-')&&(c2=='*'||c2=='/'||c2=='%'))
    {
        temp=three(o2,c2,o3);
        result=three(o1,c1,temp);
    }
    else
    {
        temp=three(o1,c1,o2);
        result=three(temp,c2,o3);
    }
    return result;
}