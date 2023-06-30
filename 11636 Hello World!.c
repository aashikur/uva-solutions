#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    long long int base, cnt, target,Tcase;

    Tcase = 1;
    while(scanf("%lld",&target) == 1 && target >= 0)
    {
        base = 1;
        cnt =  1;


        for(; target > base * 2;)
        {
            base*=2;
            cnt++;
        }
        if( target == 1 || target == 0) {
            cnt = 0;
        }
        printf("Case %lld: %lld\n",Tcase,cnt);
        Tcase++;


    }
    return 0;
}
