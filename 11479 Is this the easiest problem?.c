#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    long long int T, x,y,z,result; int Tcase;
    scanf("%lld",&T);

    Tcase = 1;
    while(T--)
    {
        result = 0;
        scanf("%lld %lld %lld",&x,&y,&z);
        if(x + y > z && x+z>y && y+z>x)
        {
            if(x == y && y == z) result = 1;
            else if(x == y || x == z || y == z) result = 2;
            else if(x != y && y != z) result = 3;
        }

        if(result == 0)
            printf("Case %d: Invalid\n",Tcase);
        if(result == 1)
            printf("Case %d: Equilateral\n",Tcase);
        if(result == 2)
            printf("Case %d: Isosceles\n",Tcase);
        if(result == 3)
            printf("Case %d: Scalene\n",Tcase);

        Tcase++;
    }
    return 0;
}
