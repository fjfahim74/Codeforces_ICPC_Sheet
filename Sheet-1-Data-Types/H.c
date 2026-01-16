#include <stdio.h>
#include <math.h>
int main()
{
    int A, B;
    double X;
    scanf("%d%d", &A, &B);
    X = (double)A / B;
    printf("floor %d / %d = %0.lf\n", A, B, floor(X));
    printf("ceil %d / %d = %0.lf\n", A, B, ceil(X));
    printf("round %d / %d = %0.lf\n", A, B, round(X));
}
