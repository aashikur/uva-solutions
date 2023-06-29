#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char str[10000];
    int r, n,i,len;

    while(1)
    {
        scanf("%s",str);

        len = strlen(str);
        if(str[0] == '0' && len == 1) break;

        r = 0;
        for( i = 0; i<len; i++)
        {
            n = r*10 + (str[i] - 48);
            r = n%11;
        }

        if(r==0)
            printf("%s is a multiple of 11.\n",str);
        else
            printf("%s is not a multiple of 11.\n",str);

    }
    return 0;
}
