#include <stdio.h>
int main()
{
    int sum = 0, i, n, r = 0, m;
    scanf("%d", &m);
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        sum = sum + r * 10 + m;
        r = r * 10 + m;
    }
    printf("%d", sum);

    return 0;
}
