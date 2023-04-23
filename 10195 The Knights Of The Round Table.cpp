//** Bismillahir Rahmanir Rohim**//

#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{

    double a,b,c,s, result;
    while(cin >> a>>b>>c)
    {
        s = (a+b+c)/2.0;

        if(a == 0 || b == 0 || c== 0)
            result = 0;
        else if(a + b < c || b + c< a || a+c <b)
            result = 0;
        else
            result = sqrt(((s-a)*(s-b)*(s-c))/s);

        printf("The radius of the round table is: %.3lf\n",result);
    }

    return 0;
}
