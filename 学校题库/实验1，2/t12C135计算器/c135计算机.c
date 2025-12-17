#include<stdio.h>
long long int ca(long long int a,long long int s1,long long int b);
long long int cb(long long int a,long long int s1,long long int b,long long int s2,long long int c);
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
        result=ca(a,s1,b);
    }
    else if(space==4)
    {
        sscanf(line,"%lld %c %lld %c %lld",&a,&s1,&b,&s2,&c);
        result = cb(a,s1,b,s2,c);
    }
    printf("%lld\n", result);
    return 0;
}
long long int ca(long long int a,long long int s1,long long int b)
{
	long long int op;
	if(s1=='+')
	{
		op=a+b;
	}
	else if(s1=='-')
	{
		op=a-b;
	}
	else if(s1=='*')
	{
		op=a*b;
	}
	else if(s1=='/')
	{
		op=a/b;
	}
	else if(s1=='%')
	{
		op=a%b;
	}
	return op;
}
long long int cb(long long int a,long long int s1,long long int b,long long int s2,long long int c)
{
	long long int temp=0;
	long long int output;
	if((s2=='*'||s2=='/'||s2=='%')&&(s1=='+'||s1=='-'))
	{
		temp=ca(b,s2,c);
		output=ca(a,s1,temp);
	}
	else
	{
		temp=ca(a,s1,b);
		output=ca(temp,s2,c);
	}
	return output;
}
/*    原主函数，用了 s1=='+' 这种写法，但 s1 是一个字符串（char s1[32]），不是单个字符，这样比较会导致未定义行为。
int main()
{
    long long result;
    char line[128];
    fgets(line,sizeof(line),stdin);
    int i,space=0;
    for (i = 0; line[i]!='\0';i++)
    {
        if (line[i]==' ')
        {
            space++;
        }
    }
    //通过获取空格的数量判断135，
    char a[32],s1[32],b[32],s2[32],c[32];
    if (space==0)
    {
        sscanf(line,"%31s",a);
        result=atoll(a);
    }
    else if(space==2)
    {
        sscanf(line,"%31s %31s %31s",a,s1,b);
        long long a1,b1;
        a1=atoll(a);
        b1=atoll(b);
        result=ca(a1,s1,b1);
    }
    else if(space==4)
    {
        sscanf(line,"%31s %31s %31s %31s %31s",a,s1,b,s2,c);
        long long a1,b1,c1;
        a1=atoll(a);
        b1=atoll(b);
        c1=atoll(c);
        result=cb(a1,s1,b1,s2,c1);
    }
    printf("%lld",result);
    return 0;
}
*/