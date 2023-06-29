#include <stdio.h>
#include <math.h>
#include<limits.h>

int main()
{
    int t,Tcase= 1;
    int max,smax,arr[3],i;
    scanf("%d",&t);

    while(t--)
    {
        for(i = 0; i<3; i++)
            scanf("%d",&arr[i]);

         max = INT_MIN;
         smax = INT_MIN;

        for(i = 0; i<3; i++)
        {
            if(max < arr[i])
                max = arr[i];
        }
        for(i = 0; i<3; i++)
        {
            if(smax < arr[i] && max != arr[i] )
                smax = arr[i];
        }

        printf("Case %d: %d\n",Tcase,smax);

        Tcase++;
    }


    return 0;
}
