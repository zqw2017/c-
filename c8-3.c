#include <math.h>
#include <stdio.h>
int fun(int arr[12], int n )
{ int i;
int s=0;
for (i=0;i<n;i++)
if ( arr[i]%3!=0&&arr[i]%5!=0 )
/************found************/
s=s+arr[i];
return (s);
}
int main()
{ int a[12]={1,8,5,10,6,18,7,2,4,12,9,11};
 /************found************/
 printf("The result is : %ld\n",fun(a,12));
return 0;
}
