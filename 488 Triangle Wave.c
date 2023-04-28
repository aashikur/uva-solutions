#include <stdio.h>

int main()
{

    int amp,freq,test,i,j;
    scanf("%d",&test);

    while(test--)
    {
        scanf("%d %d",&amp,&freq);

        while(freq--)
        {
            for( i = 1; i<=amp; i++)
            {
                for( j = 1; j<=i; j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }

            for( i = amp -1; i>=1; i--)
            {
                for( j = 1; j<=i; j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            if(freq)printf("\n");
        }

        if(test)printf("\n");
    }


    return 0;
}
