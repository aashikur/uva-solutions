#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main()
{
    int x,i,test,min ,max,  num;
    scanf("%d",&test);

    while(test--)
    {
        x,i,min = INT_MAX,max=INT_MIN,  num;
        scanf("%d",&x);

        for(i=0; i<x; i++)
        {
            scanf("%d",&num);
            if(max < num) max = num;
            if(min > num) min = num;
        }

        printf("%d\n",(max-min)*2);

    }

    return 0;
}



