#include <stdio.h>
long int jf(int n) /*������׳˺��� jf*/
{
int i;
long int t=1;
for(i=1; i<=n; i++)
t =t*i;
/************found************/
return t;
}
long int cmn(int m, int n) /*��������������� cmn*/
{
return(jf(m)/(jf(n)*jf(m-n)));/*�� return ��䷵�ؽ��*/
}
int main( )
{ int m,n;
printf("please enter m and n: ");
 scanf("%d,%d",&m,&n);
/************found************/
printf("%d\n",cmn(m,n)); /*���� cmn ������ӡ���*/
return 0;
}