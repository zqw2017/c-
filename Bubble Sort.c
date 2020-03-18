#include<stdio.h>
int main()
{
	int a[6]={12,3,4,1,5,7};
	int i,j,t;
	for (i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[j+1]>a[j])
			{t=a[j+1];a[j+1]=a[j];a[j]=t;}
		}
	}
for (i=0;i<6;i++)
printf("%d\t",a[i]);
return 0;

}