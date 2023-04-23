//** Bismillahir Rahmanir Rohim**//

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void)
{
    float h,m;
    float angle;
    while(scanf("%f:%f",&h,&m)){

            if(h ==0 && m == 0) break;
            angle = (h*30 + m*0.5) - (m*6);
            angle = abs(angle);
            angle = (angle > 180)? 360 - angle : angle;

            printf("%.3f\n",angle);

    }


    return 0;
}
