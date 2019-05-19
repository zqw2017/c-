#include<stdio.h>
#include<string.h>
 int main()
{
int q=0,b=0,c=0,d=0,e=0,i;
char a[80];
fgets(a,80,stdin);
for(i=0;i<=80;i++)
 {
	 if(a[i]!='\0'){
	 if(a[i]>='a'&&a[i]<='z')
		 q++;
	 else if(a[i]>='A'&&a[i]<='Z')
		 b++;
	 else if(a[i]>='0'&&a[i]<='9')
		 c++;
	 else if(a[i]='\t')
		 d++;
	 else 
		 e++;}
	 else break;
 }
	 printf("A:%d\na:%d\n0:%d\n :%d\nothers:%d\n",q,b,c,d,e);
	return 0;
 }
