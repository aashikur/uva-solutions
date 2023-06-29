#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int BuyCola,EmptyBottle,TotalEnjoy;

    while( scanf("%d",&BuyCola) != EOF){

    TotalEnjoy = BuyCola;
    while(BuyCola != 1)
    {
        TotalEnjoy += BuyCola/3;
        EmptyBottle = BuyCola%3;
        BuyCola = EmptyBottle + BuyCola/3;

        if(BuyCola == 2) BuyCola++;
    }

    printf("%d\n",TotalEnjoy);

    }

    return 0;
}
