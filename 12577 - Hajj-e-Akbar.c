#include <stdio.h>
#include <math.h>

int main()
{
    char ch;
    int num = 0;

    while(scanf("%c",&ch))
    {
        if(ch=='*')break;
        if(ch == 'H' || ch == 'U') num++;
        if(ch == 'H')
            printf("Case %d: Hajj-e-Akbar\n",num);
        if(ch == 'U')
            printf("Case %d: Hajj-e-Asghar\n",num);


    }

    return 0;
}
