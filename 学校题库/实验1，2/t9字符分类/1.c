#include<stdio.h>
int main()
{
    int c=getchar();
    if(c>='0'&&c<='9')
    {
        int num;
        num=c-'0';
        if(num%2==0)   //原代码 if(c-'0'%2==0),是不对的，这样先算了0%2，而不是先算c-0
        {
            putchar('E');
        }
        else
        {
            putchar('O');
        }
    }
    else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            putchar('v');
        }
        else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            putchar('V');
        }
        else if(c>='a'&&c<='z')
        {
            putchar('c');
        }
        else
        {
            putchar('C');
        }
    }
    else
    {
        putchar('S');
    }
}