#include <stdio.h>
#include <stdlib.h>

#define R1 3
#define C1 3
#define R2 3
#define C2 3

void MulMat(int a[R1][C1], int b[R2][C2])
{
    int sum[R1][C2];
    printf("\nThe result of multiplication of two matrix is:\n");
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            sum[i][j]=0;

            for (int k = 0; k < R2; k++)
            {
                sum[i][j] += a[i][k] * b[k][j];
            }

            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
int main()
{

    int a[R1][C1] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}

    };

    int b[R2][C2] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}

    };

    if (R1 != C1)
    {
        printf("\nnThe no of rows in a matrix1 is not equal to no of coloms in matrix2\n");
        exit(EXIT_FAILURE);
    }

    MulMat(a, b);

    return 0;
}