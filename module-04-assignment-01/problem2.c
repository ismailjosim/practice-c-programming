#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    long long c = (long long)a * b;

    printf("%lld", c);

    return 0;
}
