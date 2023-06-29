#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int x,y,z,ans,t,Tcase;

    scanf("%d",&t);

    Tcase = 1;
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);

        z = z%x;
        ans = (y+z == x)? x : (y+z)%x;
        printf("Case %d: %d\n",Tcase,ans);
        Tcase++;
    }

    return 0;
}
