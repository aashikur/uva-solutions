#include <iostream>
#include <cstring>

using namespace std;

int theSum( const char* str)
{
    int sum = 0;
    int i ;

    int len = strlen(str);

    for(i = 0; i<=len-1; i++)
    {
        if('a' <= str[i] && str[i] <= 'z')
        {
            sum += (str[i]-96) ;
        }
        if('A' <= str[i] && str[i] <= 'Z')
        {
            sum += (str[i]-38);
        }
    }

    return sum;

}

int isPrime( const char* str)
{
    int num = theSum(str);
    int i,cnt = 0;

    for(i = 2; i*i<=num; i++)
    {
        if(num%i == 0)
        {
            cnt++;
            break;
        }
    }

    if(cnt == 0)
        return 1;
    else
        return 0;
}


int main ()
{
    char letter[21];

    while(scanf("%s",letter)!= EOF){


    if(isPrime(letter))
        cout << "It is a prime word."<<endl;
    else
        cout << "It is not a prime word."<<endl;

    }
    return 0;
}
