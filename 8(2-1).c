#include <stdio.h>
void  fun(int m, int k)
{
    int a[20]={3};
    int i=0,j;
    while (m)
    {
        a[i]=m%k;
        m=m/k;
        i++;
        if(i==9)
            break;
    }
    for (j=i-1;j>0;j--)
        if(a[j]!=3)
        printf("%d",a[j]);
}
int main()
{ int n ,k ;
printf("\n请输入一个十进制整数:\n");
scanf("%d",&n);
printf("\n请输入要转换的进制数:\n");
scanf("%d",&k);
fun(n,k);
    return 0;
}
 