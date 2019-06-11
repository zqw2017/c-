#include <stdio.h>
int main()
{ int a[10];
int *p, max;
 for (p=a;p<a+10;p++)
 scanf ("%d", p);
for (p=a;p<a+10;p++)
 if (*p>max) max=*p;
printf ("MAX=%d\n",max);
return 0;
}
