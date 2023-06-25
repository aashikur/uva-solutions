#include<stdio.h>

int main()
{

    int x,y,i,temp,n,cycle,MaxCycle,swift;

    while(scanf("%d %d",&x,&y)!= EOF)
    {
        swift = 0;
        if(x>y)
        {
            temp = x;
            x = y ;
            y = temp;
            swift = 1;

        }
        MaxCycle = 0;
        for(i = x; i<=y; i++)
        {
            n = i;
            cycle = 0;
            while(1)
            {
                cycle++;
                if(n == 1)
                    break;
                else if(n%2 == 0)
                    n/=2;
                else
                    n= 3*n+1;
            }

            if(cycle > MaxCycle)
                MaxCycle = cycle;
        }

        if(swift == 1)
            printf("%d %d %d\n",y,x,MaxCycle);
        else
            printf("%d %d %d\n",x,y,MaxCycle);
    }

    return 0;

}
