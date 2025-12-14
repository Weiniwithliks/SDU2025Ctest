#include<stdio.h>
#include<string.h>
int run_length_encode(char * s);
int main()
{
    char s[]="aaabb";
    run_length_encode(s);
    printf("%s",s);
    return 0;
} 

int run_length_encode(char * s)
{
    int i=0,k=0,j=0;
    char temp[12];
    while (1)
    {
        if(s[j]==s[k])
        {
            k++;
            continue;
        }
        else
        {
        char c=s[j];
            if(k-j==1)
            {
                s[i]=c;
                i++;
                j=k;
            }
            else
            {
                int count=k-j;
                int len=sprintf(temp,"%d",count);
                int m;
                for(m=0;m<len;m++)
                {
                    s[i]=temp[m];
                    i++;
                }
                s[i]=c;
                j=k;
                i++;
            }
        }
        if(s[k]=='\0')break;
        k++;
    }

    s[i]='\0';
    return i;
}