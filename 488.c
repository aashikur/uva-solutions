#include <stdio.h>

int main()
{
    int i, j, Amp,Freq,Test,cntLine = 0,LastLine=0;
    scanf("%d",&Test);

    while(Test--)
    {
        scanf("%d %d",&Amp,&Freq);
        LastLine += (Amp*2 -1)*Freq + Freq;
        while(Freq--)
        {
            for(i=1; i<=Amp; i++)
            {
                cntLine++;
                for(j = 1; j<=i; j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            for(i=1; i<=Amp; i++)
            {
                cntLine++;
                for(j = Amp -i; j>= 1; j-- )
                {
                    printf("%d",Amp-i);
                }


                if((cntLine == LastLine || cntLine == LastLine ))
                {

                } else
                   if(i<Amp) printf("\n");
            }
        }

    }



    return 0;
}
