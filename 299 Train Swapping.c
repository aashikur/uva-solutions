#include <stdio.h>

int main()
{

    int max = 100, temp, cnt, run,i,test, num[max];
    scanf("%d",&test);

    while(test--)
    {
        scanf("%d", &max);


        for(i = 0 ; i<max ; i++)
            scanf("%d",&num[i]);

        run = max-1;
        cnt = 0;
        while(run--)
        {
            for(i = 0; i<max-1; i++)
            {
                if(num[i] > num[i+1])
                {
                    cnt++;
                    temp = num[i];
                    num[i] = num[i+1];
                    num[i+1] = temp;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",cnt);
    }

    return 0;
}
