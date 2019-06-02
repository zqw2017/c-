#include <stdio.h>
int main(){
    int n;
    printf("input a number:");
    scanf("%d",&n);
    printf("\n");
    if(n>=10&&n<=9999)
    {
    printf("%d=",n);
    if(n%1000%100%10)
    {
        printf("%d*1",n%1000%100%10);
        if(n%1000%100/10||n%1000/100||n/1000)
            printf("+");
    }
    if(n%1000%100/10)
    {
        printf("%d*10",n%1000%100/10);
        if(n%1000/100||n/1000)
            printf("+");
    }
    if(n%1000/100)
    {
        printf("%d*100",n%1000/100);
        if(n/1000)
            printf("+");
    }
    if(n/1000)
        printf("%d*1000",n/1000);
    } else
        printf("out of range");
    return 0;
}