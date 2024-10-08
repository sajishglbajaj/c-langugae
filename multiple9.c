#include <stdio.h>
int main()
{
    int sum = 0, i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + sum * 10 + 9;
    }
    printf("%d", sum);

    return 0;
}
