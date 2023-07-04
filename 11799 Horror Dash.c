#include<stdio.h>
#include<limits.h>

int main()
{

    int t,num,max,TestCase,student;
    scanf("%d",&t);

    TestCase = 1;

    while(t--)
    {
        max = INT_MIN;

        scanf("%d",&student);

        while(student--)
        {
            scanf("%d",&num);
            if(num>max) max = num;
        }

        printf("Case %d: %d\n",TestCase,max);
        TestCase++;
    }

    return 0;

}
