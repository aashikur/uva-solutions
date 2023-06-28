#include<stdio.h>

int main()
{
    int t, Tcase=1,mid,a,b,c;
    scanf("%d",&t);

    while(t--)
    {
        mid = -1;
        scanf("%d %d %d",&a,&b,&c);

        if((a>b && a<c) || (a<b && a>c)) mid = a;
        if((b>a && b<c) || (b<a && b>c)) mid = b;
        if((c>b && c<a) || (c<b && c>a)) mid = c;

        printf("Case %d: %d\n",Tcase,mid);
        Tcase++;

    }
    return 0;
}
