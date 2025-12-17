/**
 * A、B为“行主序”存储的矩阵，乘积矩阵保存在C中。
 * m、n为矩阵A的行数、列数。
 * n、p为矩阵B的行数、列数。
 */
/* 
void matrix_mul(const int A[], const int B[], int C[], int m, int n, int p)
{
    int i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            int sum=0;
            for(k=0;k<n;k++)
            {
                sum=sum+A[n*i+k]*B[p*k+j];
            }
            C[i*p+j]=sum;
        }
    }
} 
*/
void matrix_mul(const int A[], const int B[], int C[],int m, int n, int p)
{
    //没必要每一个算好放到C里，可以慢慢加进去，增加复用率
    int i,k,j;
    for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++) // k循环提前
        {
            int a_val=A[i*n+k];
            for(j=0;j<p;j++)
            {
                C[i*p+j]+=a_val*B[k*p+j];
            }
        }
    }
}