#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int power = 2 << (n - 1);
    printf("%d", power);
    return 0;
}
