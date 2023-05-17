#include <stdio.h>

int main()
{
    int r, num, temp, i,test;
    int count[10];
    scanf("%d",&test);

    while(test--)
    {
        scanf("%d",&num);

        for( i = 0; i<10; i++)
            count[i] = 0;

        for( i = 1 ; i<=num; i++)
        {
            temp = i;
            while(temp)  // 13
            {
                r = temp%10;
                count[r]++;
                temp/=10;
            }
        }

        for( i = 0; i<10; i++)
        {
            printf("%d", count[i]);
            if(i<10-1)printf(" ");
        }  printf("\n");
    }



    return 0;
}
