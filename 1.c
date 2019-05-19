#include<stdio.h>
#define N 10
int main()
{
    char a[N],m;
    int b[N],i,j=0,flag=1,n=0;
    printf("input str and strings\n");
    scanf("%c,%s",&m,a);
    for (i=0;a[i]!='\0';i++){
        if(a[i]==m){
            flag=flag+1;
            b[j]=i;
            j++;
        }
    }
    printf("location:");
    for(n=0;n<j;n++){
        printf("%d ",b[n]);
    }
    printf("\ntimes:%d",flag-1);
    return 0;
}
