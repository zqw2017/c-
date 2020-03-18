#include <stdio.h>
int main( )
{ int i, a[10];
 for( i=1; i<=10; i++)
/**************found************/
a[i]=i;
 for(i=0;i<5;i++)
/**************found************/
a[9-i]=i;
 for(i=0;i<10;i++)
printf("%5d",a[i]);
 printf("\n");
return 0;
}
