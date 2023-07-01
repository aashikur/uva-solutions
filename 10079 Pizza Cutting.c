#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main()
{
    long long int num;
    long long int res;

    while(scanf("%lld",&num) == 1){
        if(num < 0) break;

    res =( num * (num+1))/2 + 1;

    printf("%lld\n",res);
    }
    return 0;
}



