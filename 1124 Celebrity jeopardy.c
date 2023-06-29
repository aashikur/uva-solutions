#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char str[10000];

    while(scanf("%[^\n]s",str)!=EOF)
    {
        printf("%s\n",str);
        getchar();
    }
    return 0;
}
