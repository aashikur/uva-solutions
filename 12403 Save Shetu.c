#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char str[100000];

    int sum,Tsum,i, t;

    scanf("%d",&t);

    Tsum = 0;
    while(t--)
    {
        scanf(" %[^\n]s",str);

        sum = 0;
        for(i = 7; i< strlen(str); i++)
            sum = sum*10 + str[i]-48;

        Tsum+=sum;

        if(str[0] == 'r')
            printf("%d\n",Tsum);
    }
    return 0;
}
