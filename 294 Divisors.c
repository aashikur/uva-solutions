#include <stdio.h>
#include <math.h>

int main()
{
    int div,L,H, cnt, n, i, j, small = 9999999999,max = 0;
    scanf("%d %d",&L,&H);
    div = H;

    for(j = div; j>=L; j--)
    {
        cnt = 0;
        for( i = 1; i<=sqrt(j); i++)
        {
            if(j%i==0)
            {
                n = j/i;
                cnt += (n==i)? 1 : 2;
                if(max<cnt) max = cnt;
                if(cnt == max) small = j;

              //    printf("(%d, %d)\n",i, n);
            }
        }
      //  printf("%d has %d Divisor\n\n",j,cnt);

    }
    printf("Between %d and %d, %d has a maximum of %d divisors.\n",L,H,small,max);



    return 0;
}
