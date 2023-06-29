#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char str[10000];
    int i;

    while(scanf(" %[^\n]s",str) != EOF){
        for(i = 0;i<strlen(str); i++){
            str[i] = str[i] - 7;
        }
        puts(str);
    }


    return 0;
}
