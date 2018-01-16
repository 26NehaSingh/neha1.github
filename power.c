#include <stdio.h>

int main()
{
    int b, e;
    long long p = 1;
    int i;


    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter exponent: ");
    scanf("%d", &e);

    for(i=1; i<=e; i++)
    {
        p = p * b;
    }

    printf("%d ^ %d = %lld", b, e, p);

    return 0;
}
