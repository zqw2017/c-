#include <stdio.h>
 int findmax(int s[10],int n)
 { int j,p=0;
 for (j=1;j<n;j++)
 if (s[j]>s[p]) p=j;
 return p;
 }
 int main( )
 { int a[10],i,k;
 for (i=0;i<10;i++) scanf("%d",&a[i]);
 k=findmax(a,10);
 printf("%d,%d\n",k,a[k]); 
 return 0;
}
