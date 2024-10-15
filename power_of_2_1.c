#include <stdio.h>

int bitwiseMultiply(int a, int b)
{
    int result = 0;

    while (b > 0)
    {

        if (b & 1)
        {
            result += a;
        }

        a <<= 1;

        b >>= 1;
    }

    return result;
}

int square(int n)
{
    return bitwiseMultiply(n, n);
}

int main()
{
    int n = 5;

    printf("%d^2 = %d\n", n, square(n));
    return 0;
}
