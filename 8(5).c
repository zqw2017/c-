#include <stdio.h>
void convert(int x[3][3])
{
    int i,j,t;
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
        if(j>i)
        {t=x[i][j];x[i][j]=x[j][i];x[j][i]=t;}
}
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    convert(a);
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
            printf("%d\t",a[i][j]);
    return 0;
    }
 