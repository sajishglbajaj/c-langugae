#include <stdio.h>
int main()
{
    int sum = 0, i, n;

    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        sum = sum + n;
    }
    int Average = sum / 10;
    printf("%d", sum);
    printf("%d", Average);

    return 0;
}
