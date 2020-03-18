#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main ()
{
char *s;
char c;
printf("which style you want to :\n");
printf("capital ( c ) or uncapital(a):");
c=getchar();
s=calloc(20,sizeof(char));
if(c=='c')
strcpy(s,"COMPUTER");
else
strcpy(s,"computer");
puts(s);
return 0;
}
