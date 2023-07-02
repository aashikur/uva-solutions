#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main()
{
    int test;
    long long int num,ans;

    scanf("%d",&test);

    while(test--)
    {
        scanf("%lld",&num);

        ans = num * 567;
        ans/=9;
        ans+=7492;
        ans*=235;
        ans/=47;
        ans-=498;
        ans/=10;
        ans%=10;
        ans = abs(ans);
        printf("%lld\n",ans);
    }
    return 0;
}


