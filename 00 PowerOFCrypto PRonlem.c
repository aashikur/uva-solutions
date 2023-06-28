#include <stdio.h>
#include <math.h>

int main()
{

    double a, p, result, ResLog, ResLn;
    scanf("%lf %lf",&a, &p); // Input : 2 16 => 4

    result = log10(p)/log10(a); // This is The Solution, But Error for a Large value.

    ResLog = pow(10,log10(p)/a);   // For Large Value: This solution with Log base '10'
    ResLn = exp(log(p)/a);          // For Large Value: This Solution with Log base 'e'


  //  printf("%.0lf\n",ResLn); // Log base 'e' Solution
    printf("log10(%.0lf) = %.2lf, log10(p)/a = %.2lf : pow(10,x)     : %.0lf\n",p,log10(p), log10(p)/a, ResLog);// Log Base 10 Solution
    printf("log10(%.0lf) = %.2lf, log10(a)   = %.2lf : log(p)/log(a) : %.0lf\n",p,log10(p), log10(a), result);// Log Base 10 Solution
    return 0;
}
