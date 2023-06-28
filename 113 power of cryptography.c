#include <stdio.h>
#include <math.h>

int main()
{

    double p, a, result, ResLog, ResLn;
    scanf("%lf %lf",&a, &p);

  //  result = log10(p)/log10(a); // This is The Solution, But Error for a Large value.

    ResLog = pow(10,log10(p)/a);   // For Large Value: This solution with Log base '10'
    ResLn = exp(log(p)/a);          // For Large Value: This Solution with Log base 'e'



  //  printf("%.0lf\n",ResLn); // Log base 'e' Solution
    printf("%.0lf\n",ResLog);// Log Base 10 Solution
    return 0;
}
