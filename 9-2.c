#include <stdio.h>
int main()
{ char s[20];
char *p=s;
scanf("%s",p); /*ע���� scanf()����� gets()���������*/
while(*p!='\0')
 {
 if(*p>'A'&&*p<'Z') *p=*p+('a'-'A');
 p++;
}
puts (s);
return 0;
}