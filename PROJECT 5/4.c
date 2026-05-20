#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    printf("\nEnter array elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nRow wise sum:\n");

    for (i = 0; i < r; i++)
    {
        int rowSum = 0;

        for (j = 0; j < c; j++)
        {
            rowSum = rowSum + a[i][j];
        }

        printf("Sum of row %d = %d\n", i, rowSum);
    }

    printf("\nColumn wise sum:\n");

    for (j = 0; j < c; j++)
    {
        int colSum = 0;

        for (i = 0; i < r; i++)
        {
            colSum = colSum + a[i][j];
        }

        printf("Sum of column %d = %d\n", j, colSum);
    }
}