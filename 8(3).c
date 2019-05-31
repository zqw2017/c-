#include <stdio.h>
void fun(char str1[],char str2[])
{
    int i;
    for (i=0;i<80;i++)
        str2[i]=str1[2*i];
}
int main()
{
    char str1[80]="This Is a c Program",str2[80];
    printf("String is: %s \n",str1) ;
    fun(str1,str2);
    printf("Result is: %s \n",str2) ;
    return 0;
}
 