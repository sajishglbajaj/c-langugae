#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if ((n & 1) != 0)
    {
        printf("odd number");
    }
    else
    {
        printf("even number");
    }

    return 0;
}
