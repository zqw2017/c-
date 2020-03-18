#include <stdio.h>
int main( )
{
char s[10]; int i;
int n=0;
/**************found************/
gets(s);
/**************found************/
for(i=0;s[i]!='\0';i++)
n = n*10 + s[i]-'0';
printf("n=%ld\n",n);
return 0;
}