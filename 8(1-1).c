#include <stdio.h>
int GCD(int a,int b){
    if(a%b==0)
        return b;
    return GCD(b,a%b);
}

int LCM(int a,int b){
    return a*b/GCD(a,b);
}
int main(){
int a,b;
scanf("%d %d",&a,&b);
printf("%d\n%d",GCD(a,b),LCM(a,b));
    return 0;
}