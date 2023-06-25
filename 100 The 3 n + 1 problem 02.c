#include<stdio.h>

int myFunction(int x,int y);

int main()
{
    int x,y,MaxCycle_inRange;
    
    while(scanf("%d %d",&x,&y)!= EOF)
    {
        MaxCycle_inRange = myFunction(x,y);
        printf("%d %d %d\n",x,y,MaxCycle_inRange);
    }

    return 0;
}




int myFunction(int x,int y){
    int i,temp,n,cycle,MaxCycle,swift;
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
        {
            temp = x;
            x = y ;
            y = temp;
        }
        return MaxCycle;
}
