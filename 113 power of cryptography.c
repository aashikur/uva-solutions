#include <stdio.h>
#include <math.h>

int main()
{

    double p, a, result, ResLog, ResLn;
    scanf("%lf %lf",&a, &p);

  //  result = log10(p)/log10(a); // It's to Find the Power

    ResLog = pow(10,log10(p)/a);   // TO find Base
    ResLn = exp(log(p)/a);          // To find base



  //  printf("%.0lf\n",ResLn); // Lon Base Solution
    printf("%.0lf\n",ResLog);// Log Base Solution
    return 0;
}
