//* Bismillahir Rahmanir Raham *//
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void)
{

    int a, b, res;

    while(cin >> a>>b)
    {
        if(a == 0 && b == 0) break;
        a = ceil(sqrt(a));
        b = floor(sqrt(b));

        res = b-a +1;

        printf("%d\n",res);

    }

    return 0;
}
