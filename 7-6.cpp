#include<stdio.h>
int main()
{
	char a[80],m;
	int b[80],i,j,flag=0;
	gets(a);
	scanf("%s",&m);
	for(i=0;i<80;i++)
	{
		if(a[i]=='m')
		{
			b[i]=i;
			flag++;
		}
	}
printf("%d",b);
printf("%d",flag);
	 
}