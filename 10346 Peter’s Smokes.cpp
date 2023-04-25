/* Bismillahir Rahmanir Rahim */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int Max, N, rem, New;

    while(cin >> N >> New)
    {
        Max = 0,rem = 0;

        while(N)
        {
            Max+= N;
            rem+= N%New;
            N = N/New;

            if(N==0 && rem != 0)
            {
                N = rem;
                rem = N%New;
                N = N/New;
            }
        }

        cout << Max << "\n" ;

    }

    return 0;
}
