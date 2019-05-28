#include <stdio.h>
long func(long m)
{ long k=1;
 do
{ k*=m%10;
 m=m/10;
}while(m);
 return(k);
}
int main( )
{
 long n;
 scanf("%ld",&n);
 printf("%ld\n",func(n));
}
