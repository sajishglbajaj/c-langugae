#include <stdio.h>

int main()
{
    int i, j;

    // Loop to control the number of rows
    for (i = 1; i <= 3; i++)
    {
        if (i == 1 || i == 3)
        {
            // Row 1 and Row 3: 4 stars
            for (j = 1; j <= 4; j++)
            {
                printf("* ");
            }
        }
        else if (i == 2)
        {
            // Row 2: 3 spaces, 1 star
            for (j = 1; j <= 3; j++)
            {
                printf("  "); // Print 3 sets of spaces (2 spaces each)
            }
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
