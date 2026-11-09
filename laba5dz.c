
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y, t = 0.5, F;

    printf("Enter x and y: ");
    scanf("%lf %lf", &x, &y);

    F = (pow(sin(x), 3) + log(2 * y + 3 * x)) /
        (pow(t, M_E) + sqrt(x));

    printf("F(%.6f, %.6f) = %.6f\n", x, y, F);

    return 0;
}
