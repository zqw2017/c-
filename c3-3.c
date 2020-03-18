#include <stdio.h>
int main( )
{ 
	int a=3,b=5,c=8;
    if(a++<3&&c--!=0)b=b+1;
	printf("a=%d\tb=%d\tc=%d\n",a,b,c);
	return 0;
}