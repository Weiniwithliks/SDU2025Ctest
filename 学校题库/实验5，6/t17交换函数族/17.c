/**
 * 参考函数原型，补全并实现以下6个交换函数。
 */
void swap_char(char* a, char* b);
void swap_short( short * a, short * b);
void swap_int(int* a,int* b);
void swap_long (long* a,long* b);
void swap_float (float* a,float* b);
void swap_double (double* a,double* b);
//
void swap_char(char* a, char* b)
{
    char ctemp=*a;
    *a=*b;
    *b=ctemp;
}
//
void swap_short( short * a, short * b)
{
    short ctemp=*a;
    *a=*b;
    *b=ctemp;
}
//
void swap_int(int* a,int* b)
{
    int ctemp=*a;
    *a=*b;
    *b=ctemp;
}
//
void swap_long (long* a,long* b)
{
    long ctemp=*a;
    *a=*b;
    *b=ctemp;
}
//
void swap_float (float* a,float* b)
{
    float ctemp=*a;
    *a=*b;
    *b=ctemp;
}
//
void swap_double (double* a,double* b)
{
    double ctemp=*a;
    *a=*b;
    *b=ctemp;  
}