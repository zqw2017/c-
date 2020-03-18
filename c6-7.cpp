#include <stdio.h>
int main()
{ /************found************/
	int a[3][3]={{4,2,34},{7,3,12},{5,6,5}},i,j,min;
min = a[0][0];
/************found************/
for ( i=0; i<3; i++)
for ( j=0; j<3; j++)
/************found************/
if (min > a[i][j])
{
/************found************/
min = a[i][j];
}
 printf("The min is: %d\n", min);
return 0;
 }