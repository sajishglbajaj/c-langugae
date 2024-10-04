#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a char");
    scanf("%c", ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("it is a char");
    }

    else
    {
        printf("it is not char");
    }
}