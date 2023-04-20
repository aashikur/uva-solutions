#include <stdio.h>
#include <math.h>

int main()
{
    int NumOfArry;
    scanf("%d",&NumOfArry);
    int max = 1, num[max],i,temp,swif, SwifCnt = 0;

    for(i = 0; i<NumOfArry; i++)
    {
        max++;
        num[max];
        scanf("%d",&num[i]);
    }
    swif = sizeof(num);
//   printf("Aray has num: %d\n", swif);
    while(swif--)
    {
        for(i = 0; i<swif+1; i++)
        {
            if(num[i]< num[i+1])
            {
                temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
                SwifCnt++;
            }
        }
    }
    for(i = 0; i<NumOfArry; i++)
    {
     //   printf("%d ",num[i]);
    }
    printf("Optimal train swapping takes %d swaps.",SwifCnt);




    return 0;
}
