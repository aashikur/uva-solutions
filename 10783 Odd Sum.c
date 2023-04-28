#include <stdio.h>

int main()
{
    int a,b,sum,test,i,cnt = 0;
    scanf("%d",&test);

    while(test--)
    {
        cnt++, sum = 0;
        scanf("%d %d",&a,&b);

        for(i=a; i<=b; i++)
        {
            sum+= (i%2==1)? i : 0;
        }
        printf("Case %d: %d\n",cnt,sum);

    }

    return 0;
}
