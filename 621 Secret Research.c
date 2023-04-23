#include <stdio.h>

int main()
{
    unsigned long long int num,r;
    int x,a,t;
    char ans;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&num);

        x = (int)log10(num) +1;
        a = num / (int)pow(10,x-2);

        if(num == 4 || num == 1 || num == 78) ans = '+';
        else if(num%100 == 78) ans = '?';
        else if( a == 78 ) ans = '-';
        else ans = '*';

        printf("%c\n",ans);
    }


    return 0;
}
