//** Bismillahir Rahmanir Rohim**//

#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{

    long long int h,o,ans;

    while(cin >> h >> o)
    {
        ans = (h>o)? h-o: o-h;
        cout << ans << "\n";
    }

    return 0;
}
