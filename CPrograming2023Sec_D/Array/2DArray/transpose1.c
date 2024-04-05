#include <stdio.h>

int main()
{
    int a[3][3], i, j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int t[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            t[i][j] = a[j][i];
        }
    }
    printf("The transpose of the matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}
