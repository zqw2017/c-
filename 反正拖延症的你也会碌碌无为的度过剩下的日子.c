#include<stdio.h>
struct
{int year;
    int month;
    int day;
}tian;

int main()
{
    int s=0,year,leap=0;
    int a1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int a2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    printf("input the date:");
    scanf("%d %d %d",&tian.year,&tian.month,&tian.day);
    year=tian.year;
    if(year%4==0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                leap = 1;
            else
                leap = 0;
        }
    }
    if(leap==1)
    {
        for (int i = 0; i <tian.month-1; i++) {
            s=s+a2[i];
        }
        printf("%d",366-s);
    }
    if(leap==0)
    {
        for (int i = 0; i <tian.month-1; i++) {
            s=s+a1[i];
        }
        printf("%d",365-s);
    }
    return 0;
}