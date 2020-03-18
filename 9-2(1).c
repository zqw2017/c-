# include <stdio.h>
int main()
{ 
	char s[20]; 
	int i;
gets(s);
for(i=0;i<20;i++)
if(s[i]>'A'&&s[i]<'Z') s[i]=s[i]+'a'-'A';
i=0;
while( s[i]!='\0')
{ printf ("%c",s[i]);
 i++;
}
return 0;
}