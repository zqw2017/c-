#include <stdio.h>
int main()
{ char s[20];
char *p=s;
scanf("%s",p); /*注意用 scanf()输入和 gets()输入的区别*/
while(*p!='\0')
 {
 if(*p>'A'&&*p<'Z') *p=*p+('a'-'A');
 p++;
}
puts (s);
return 0;
}