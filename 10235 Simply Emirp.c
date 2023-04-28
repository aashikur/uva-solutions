#include <stdio.h>

int main()
{
    int num,cnt,temp,rem,x,RevNum,i;

    while(scanf("%d",&num)!= EOF)
    {

        cnt=0;
        for( i = 2; i<=sqrt(num); i++)
        {
            if(num%i == 0)
            {
                cnt++;
                break;
            }
        }
        RevNum = 0;
        if(num != 1 && cnt == 0)
        {
            temp = num;
            while(temp)
            {
                x = log10(temp);
                rem = temp%10;
                RevNum += rem * pow(10,x);
                temp/=10;
            }
            cnt=0;
            for( i = 2; i<=sqrt(RevNum); i++)
            {
                if(RevNum%i == 0)
                {
                    cnt++;
                    break;
                }
            }
            if(num != RevNum && cnt == 0)
                printf("%d is emirp.\n",num);
            else
                printf("%d is prime.\n",num);

        }
        else
            printf("%d is not prime.\n",num);


    }
    return 0;
}
