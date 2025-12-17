/**
 * 串s仅含大小写字母。删除有序串s中的重复字符，但保持原有字符顺序。
 * 返回：处理后的串长度。
 */
int unique_chars(char * s)
{
    int i=0,k=0;
    while (s[k]!='\0')
    {
        if(s[i]==s[k])
        {
            k++;
        }
        else
        {
            i++;
            s[i]=s[k];
            k++;
        }
    }
    s[i+1]='\0';
    return i+1;
}
//双指针法
