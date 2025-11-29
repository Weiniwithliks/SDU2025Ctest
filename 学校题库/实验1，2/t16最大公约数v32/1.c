#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c;
    while (a%b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    printf("%d",c);
    return 0;
}
/* #include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	if(a*b==0)
	{
		c=0; 
	}
	else if(a>b)
	{
		c=a%b;
		while(c%b!=0)
		{
			d=c;
			c=b%c;
			b=d;		
		}
		c=d;
	}
	else if(a<b)
	{
		c=b%a;
		while(c%a!=0)
		{
			d=c;
			c=a%c;
			a=d;
		}
		c=d;
	}
	else
	{
		c=a;
	}
	printf("%d",c);
	return 0;	
} */