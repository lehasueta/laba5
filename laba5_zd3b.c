#include <stdio.h>

int main(void)
{
    int A, B, C;

    printf("Enter A, B, C: ");
    scanf("%d %d %d", &A, &B, &C);

    int condition = (A % 3 == 0) &&
                    (B % 3 == 0) &&
                    (C % 3 == 0);

    printf("Condition: %d\n", condition);

    return 0;
}
