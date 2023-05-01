#include <stdio.h>

int main()
{
    long long int a,b;
    int test;
    char res;
    scanf("%d",&test);

    while(test--)
    {
        scanf("%lld %lld",&a,&b);
        if(a==b) res = '=';
        else if(a>b) res = '>';
        else res = '<';

        printf("%c\n",res);
    }

    return 0;
}
