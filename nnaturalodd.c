#include <stdio.h>
int main()
{
    int sum = 0, i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);

    return 0;
}
