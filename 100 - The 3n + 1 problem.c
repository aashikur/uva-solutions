#include <stdio.h>

int main()
{


    int a, b, max, n, i, cnt,temp, flag;
    while(scanf("%d %d",&a,&b) != EOF)
    {
        max = 0;
        flag = 0;
        if(a>b){
            flag = 1;
            temp = a;
            a = b;
            b = temp;
        }

        for (i = a; i<=b; i++)
        {
            cnt = 0;
            n = i;

            while(1)
            {
                cnt++;
                if( n == 1)
                {
                    break;
                }
                else
                {
                    if(n%2 ==1)
                        n = (3 * n + 1);
                    else
                        n = n/2;
                }
            }

            if(cnt>max) max = cnt;
        }
            if(flag){
                temp = a;
                a = b;
                b = temp;
        }
        printf("%d %d %d\n",a, b, max);

    }

    return 0;
}
