#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,i,avg,min_move,Nset;

    n = -1;
    for(Nset = 1; ; Nset++)
    {
        scanf("%d",&n);
        if(n==0) break;

        avg = 0;
        int arr[n];
        for(i = 0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            avg+=arr[i];
        }
        avg = avg/n;

        min_move = 0;
        for(i = 0; i<n; i++)
        {
            if(arr[i]>avg) min_move += arr[i] - avg;
        }

        printf("Set #%d\nThe minimum number of moves is %d.\n\n",Nset,min_move);
    }
    return 0;
}
