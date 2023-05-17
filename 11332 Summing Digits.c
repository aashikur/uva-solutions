#include <stdio.h>

int main()
{
    long long int num, temp;
    int r, sum;

    while(1)
    {
        scanf("%lld",&num);
        if(num == 0) break;
        sum = 0;

        temp = num;
        while(1)
        {
            while(temp)
            {
                r = temp%10;
                sum+= r;
                temp/=10;
            }

            if(sum > 9)
            {
                temp = sum;
                sum = 0;
            }
            else break;

        }
        printf("%d\n",sum);
    }

    return 0;
}
