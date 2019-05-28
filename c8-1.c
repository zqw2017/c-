#include <stdio.h>
long int jf(int n) /*定义求阶乘函数 jf*/
{
int i;
long int t=1;
for(i=1; i<=n; i++)
t =t*i;
/************found************/
return t;
}
long int cmn(int m, int n) /*定义求组合数函数 cmn*/
{
return(jf(m)/(jf(n)*jf(m-n)));/*用 return 语句返回结果*/
}
int main( )
{ int m,n;
printf("please enter m and n: ");
 scanf("%d,%d",&m,&n);
/************found************/
printf("%d\n",cmn(m,n)); /*调用 cmn 函数打印结果*/
return 0;
}