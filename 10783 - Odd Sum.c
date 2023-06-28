#include<stdio.h>

int main()
{
    int t, Tcase=1,sum,a,b,i;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&a,&b);
        sum = 0;

        for(i = a; i<=b;i++){
            if(i%2==1)
                sum+= i;
        }

        printf("Case %d: %d\n",Tcase,sum);
        Tcase++;
    }
    return 0;
}
