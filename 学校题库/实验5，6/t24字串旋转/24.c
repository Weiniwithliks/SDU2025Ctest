/**
 * 对字符串s旋转k位，结果原地保存在s中。
 */
#include <string.h>
void swap(char *s,int x,int y);
void reverse(char *s,int a,int b); 
void rotate(char* s, int k)
{
    //好经典,可以新开一个字符串很快就能做完，空间复杂度O(n),但是咱写一个空间复杂度O(1)的算法练习一下
    int n=strlen(s);
    k=k%n;
    reverse(s,0,n);
    reverse(s,0,n-k);
    reverse(s,n-k,n);
}
void reverse(char *s,int a,int b)  
{
    int k;
    for(k=0;k<(b-a)/2;k++)
    {
        swap(s,a+k,b-1-k);
    }
}
void swap(char *s,int x,int y)
{
    char c=s[x];
    s[x]=s[y];
    s[y]=c;
}