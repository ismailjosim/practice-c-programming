#include <stdio.h>

// get value from user

int main()
{
    int a = 1000000000; // it will store this height value.

    // if we want to store more then this value we have to use long long int
    long long int b = 3242345324234234; // it will take 8 bytes means it can store 20 digit value.
    // printf("%d\n", a);
    // printf("%lld", b);

    // ? limitation of float
    float c = 2005.23423423423432; // can store 6 digit after decimal(.) dot sign.

    double d = 20.123456789123456;
    // printf("%f", c);
    printf("%0.15lf", d);

    return 0;
}

