
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, t = 0.3, a, b, y;

    printf("Enter x: ");
    scanf("%lf", &x);

    a = log10(fabs(x + t * t));
    b = x * t * t + sqrt(x);
    y = log((a * a) / (a + b));

    printf("x = %.2f\n", x);
    printf("t = %.2f\n", t);
    printf("a = %.6f\n", a);
    printf("b = %.6f\n", b);
    printf("y = %.6f\n", y);

    return 0;
}
