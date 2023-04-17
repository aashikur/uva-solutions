#include <stdio.h>

int main()
{

    long long int A,tA;
    int cnt , limit, Tcase = 0;
    while(scanf("%lld %d",&A,&limit) != EOF)
    {
        if(A == -1 || limit == -1) break;
    tA = A; Tcase++; cnt = 0;

    while(A<=limit){
        cnt++;
        if(A == 1)
        {
            break;
        }
        else
        {
            if(A%2 == 1 || A%2 == -1)
                A = 3*A +1;
            else
                A/=2;
        }
    }
    printf("Case %d: A = %lld, limit = %d, number of terms = %d\n",Tcase, tA,limit,cnt);

    }
    return 0;
}
