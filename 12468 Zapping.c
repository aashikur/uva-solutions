#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b, min;

    while(scanf("%d %d",&a,&b))
    {
        if(a == -1 && b == -1) break;

        min = abs(a-b);
        min = ((100-min) < min) ? 100-min: min;

        printf("%d\n",min);
    }

    return 0;
}
