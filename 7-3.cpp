#include <stdio.h>
#include<string.h>
int main( )
{ 
	char str1[80]="This Is a ",str2[80]="c Program";
printf("String1 is: %s\n",str1);
printf("String2 is: %s\n",str2); 
printf("The length of string1 is: %d\n",strlen(str1)); /*ʹ��strlen����ʵ��
printf("The length of string2 is: %d\n",strlen(str2));
/**************found************/ 
if(strcmp(str1,str2)==1)/*ʹ��strcmp����ʵ�ֱȽϴ�С��ע�����ʽ*/
printf("The max is:%s",str1);
else
printf("The max is:%s",str2); 
/**************found************/
 strcat(str1,str2); /*ʹ��strcat����ʵ�֣�ע�����ʽ*/
printf("Result is: %s\n",str1);
return 0;
}
