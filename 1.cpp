#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7};
	int sum=0,i;
	for (i=1;i<7;i=i+2)
		sum=sum+a[i];
	printf("%d",sum);
	return 0;
}
