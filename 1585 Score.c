// Bisbillah Hirhahmanir rahim

#include <iostream>
#include <string.h>

using namespace std;

int TotalScore(const char* str)
{
    int sum = 0;
    int cnt = 1;
    int i;

    int len = strlen(str);

    for(i = 0; i<len; i++)
    {
        if(str[i] == 'O')
        {
            sum+= cnt;
            cnt++;
        }
        if(str[i] == 'X')
        {
            cnt = 1;
        }
    }
    return sum;
}


int main()
{

    char str[85];
    int testCase;
    int i;

    cin>>testCase;

    for(i = 0; i<testCase; i++)
    {
        cin >> str;
        cout << TotalScore(str) << endl;

    }

    return 0;

}
