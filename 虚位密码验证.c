#include <stdio.h>
#include <string.h>
int main(){
    char key[7]="Y1N2ab";
    char pwd[21];
    char *ret;
    for (int i = 0; i <=3 ; i++) {
        gets(pwd);
        ret = strstr(pwd, key);
        if (ret)
        {printf("that 's ok");
        break;}
        else
        {printf("input again!\n");
            continue;}
    }
    return 0;
}