#include <stdio.h>
#include <ctype.h>

int main()
{

    long long int f1, f2,fi,cnt,fn, res;

    while(scanf("%lld",&fn) != EOF)
    {
    cnt=0; f1 = 0; f2 = 1;
    while(cnt <= fn)
    {
    res = f1;
    fi = f1+f2;
    f1 = f2;
    f2 = fi;
    cnt++;
    }
    printf("The  Fibonacci  number  for  %lld  is  %lld\n",fn, res);

    }



    return 0;
}
