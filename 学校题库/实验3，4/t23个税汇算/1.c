/*
* 个税计算，p为综合所得收入额，d为其他扣除额，f为减免税额。
* 返回应纳税额。请用整数运算。
*/
int income_tax(int p, int d, int f)
{
    p=p-60000-d;
    int result;
    if(p<=0)return 0;
    else if(p<=36000)result=p*3/100;
    else if(p<=144000)result=1080+(p-36000)/10;
    else if(p<=300000)result=11880+(p-144000)/5;
    else if(p<=420000)result=43080+(p-300000)/4;
    else if(p<=660000)result=73080+(p-420000)*3/10;
    else if(p<=960000)result=145080+(p-660000)*35/100;
    else result=250080+(p-960000)*45/100;
    result=result-f;
    return result;
}
