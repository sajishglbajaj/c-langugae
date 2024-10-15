#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int result = 0;
    int bit = 0;
    int origional = n;

    while (n > 0)
    {

        if (n & 1)
        {
            result += (origional << bit);
        }
        bit++;
        n >>= 1;
    }
    printf("%d", result);
    return 0;
}
