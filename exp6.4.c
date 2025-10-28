/*Experiment 6:Arrays
6.4. WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order
respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only.
Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility*/
#include <stdio.h>
int main() 
{
    printf ("Name- Bhoomi Tyagi\nSAP_ID-590028798\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");
    int m, n, p, q,i,j,k;
    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);
    int A[m][n];
    printf("Enter rows and columns of Matrix B (p q): ");
    scanf("%d %d", &p, &q);
    int B[p][q];
    if (n != p) 
    {
        printf("\nIncompatible matrices\n");
        return 0;
    }
    else
    {
    int C[m][q];
    printf("\nEnter elements of Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of Matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            C[i][j] = 0;
            for (k = 0; k < n; k++) 
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    printf("\n Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++)
            printf("%4d ", A[i][j]);
        printf("\n");
    }
    printf("\nMatrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) 
    {
        for (j = 0; j < q; j++)
            printf("%4d ", B[i][j]);
        printf("\n");
    }
    printf("\n Product Matrix C (%d x %d):\n", m, q);
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++)
            printf("%4d ", C[i][j]);
        printf("\n");
    }
    }
    return 0;
}
