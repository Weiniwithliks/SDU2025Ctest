/**
 * 清理串s首尾两端的空格字符，结果串保存到s指向地址。
 */
#include <string.h>
void trim(char * const s)
{
    int start=0,end=strlen(s)-1;
    int i;
    for(start=0;*(s+start)==' ';start++);
    for(end=end;*(s+end)==' '&&end>=0;end--);
    //以上我们找到了start和end
    int j;
    for(j=0;j<=end-start;j++)
    {
        *(s+j)=*(s+start+j);
    }
    *(s+j)='\0';
    return;
}