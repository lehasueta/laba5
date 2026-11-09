#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main(void)
{
    double gr, rad;

    printf("Enter angle in degrees: ");
    scanf("%lf", &gr);

    rad = gr * M_PI / 180.0;

    printf("sin(%.2f) = %.6f\n", gr, sin(rad));

    return 0;
}
