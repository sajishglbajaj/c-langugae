#include <stdio.h>
int main()
{
    int a = 1, sum = 0, i, b = 1, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        sum = sum + a / b;
        b = b + 1;
    }
    printf("%d", sum);

    return 0;
}
