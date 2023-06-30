#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    char x[300];
    int i;
    while(scanf("%s",x) !=EOF){

        i = 0;
        while(x[i] != '\0'){
            if('A' <= x[i] && 'C' >= x[i]) x[i] = '2';
            if('D' <= x[i] && 'F' >= x[i]) x[i] = '3';
            if('G' <= x[i] && 'I' >= x[i]) x[i] = '4';
            if('J' <= x[i] && 'L' >= x[i]) x[i] = '5';
            if('M' <= x[i] && 'O' >= x[i]) x[i] = '6';
            if('P' <= x[i] && 'S' >= x[i]) x[i] = '7';
            if('T' <= x[i] && 'V' >= x[i]) x[i] = '8';
            if('W' <= x[i] && 'Z' >= x[i]) x[i] = '9';
            i++;
        }

        printf("%s\n",x);
    }

    return 0;
}
