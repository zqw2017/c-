#include <stdio.h>
double LP(int a,int x)
{
    if(a==0)
        return 1;
    else if(a==1)
        return a;
    else
        return ((2*a-1)*x-LP(a-1,x)-(a-1)*LP(a-2,x))/a;

}
int main()
{
    int x,n;
    scanf("%d %d",&n,&x);
    printf("%.2f\n",LP(n,x));
    return 0;
    }
 