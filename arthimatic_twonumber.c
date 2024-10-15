#include <stdio.h>
#include <math.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    int a = 2, b = 3;
    int num = (ch == '+') ? (a + b) : (ch == '-')         ? (a - b)
                                  : (ch == '*')           ? (a * b)
                                  : (ch == '/' && b != 0) ? (float)a / b
                                                          : 0;

    printf("%d", num);
}
