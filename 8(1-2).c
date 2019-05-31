#include <stdio.h>
int gcd=0,lcm=0;
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
gcd=GCD(a,b);
lcm=LCM(a,b);
printf("%d\n%d",gcd,lcm);
    return 0;
}