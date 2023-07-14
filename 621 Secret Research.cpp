#include <iostream>
#include <string.h>

using namespace std;

char result(const char* str)
{

    int len = strlen(str);

    if((str[0] == '1' && len == 1) || (str[0] == '4' && len == 1)|| (str[0] == '7' &&  str[1] == '8' && len == 2))
        return '+';
    if(str[len-1] == '5' && str[len-2] == '3')
        return '-';
    if(str[0] == '9' && str[len-1] == '4')
        return '*';
    if(str[0] == '1' && str[1] == '9'&& str[2] == '0')
        return '?';

        return '\0';
}


int main()
{
    char str[100];

    int test;
    cin>> test;

    while(test--)
    {
        cin>> str;

        cout << result(str) << endl;
    }

    return 0;

}
