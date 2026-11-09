#include <stdio.h>

int main(void)
{
    int A, B;

    printf("Enter A and B: ");
    scanf("%d %d", &A, &B);

    int condition = (A % 2 == 0) != (B % 2 == 0);

    printf("Condition: %d\n", condition);

    return 0;
}
