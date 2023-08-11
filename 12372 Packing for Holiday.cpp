#include <iostream>
using namespace std;

int main()
{
    int testCase, num, max_num, serial = 1;

    cin >> testCase;

    while(testCase--)
    {
        max_num = 0;
        cin >> num;
        if(num>=max_num) max_num = num;
        cin >> num;
        if(num>=max_num) max_num = num;
        cin >> num;
        if(num>=max_num) max_num = num;

        if(max_num <= 20)
            cout << "Case " << serial << ": " << "good" << endl;
        else
            cout << "Case " << serial << ": " << "bad" << endl;

        serial++;
    }

}
