#include <stdio.h>
#include<string.h>
int main( )
{ 
	char str1[80]="This Is a ",str2[80]="c Program";
printf("String1 is: %s\n",str1);
printf("String2 is: %s\n",str2); 
printf("The length of string1 is: %d\n",strlen(str1)); /*使用strlen函数实现
printf("The length of string2 is: %d\n",strlen(str2));
/**************found************/ 
if(strcmp(str1,str2)==1)/*使用strcmp函数实现比较大小，注意其格式*/
printf("The max is:%s",str1);
else
printf("The max is:%s",str2); 
/**************found************/
 strcat(str1,str2); /*使用strcat函数实现，注意其格式*/
printf("Result is: %s\n",str1);
return 0;
}
