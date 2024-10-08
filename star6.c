#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        if (i == 1)
        {

            for (j = 0; j < 5; j++)
            {
                printf("* ");
            }
        }
        else if (i == 2)
        {

            for (j = 0; j < 3; j++)
            {
                printf("  ");
            }
            printf("*");
        }
        else if (i == 3)
        {

            for (j = 0; j < 2; j++)
            {
                printf("  ");
            }
            printf("*");
            for (j = 0; j < 4; j++)
            {
                printf("  ");
            }
        }
        else if (i == 4)
        {

            printf("  *");
        }
        else if (i == 5)
        {

            for (j = 0; j < 5; j++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
