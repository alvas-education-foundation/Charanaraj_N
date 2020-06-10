PROBLEM STATEMENT:
Write a C Program to print the sum of boundary elements of a matrix
Given a matrix, the task is to print the boundary elements of the matrix and display their sum.
Sample Output 1:
Enter M (Rows) and N (Columns): 3, 3
Enter the Elements: 1 2 3 4 5 6 7 8 9
OUTPUT:
The Input Matrix is:
1 2 3
4 5 6
7 8 9
The Boundary Elements are: 1 2 3 4 6 7 8 9
The Sum of Boundary elements of the Matrix is: 40
Sample Output 2:
Enter M (Rows) and N (Columns): 4, 5
Enter the Elements: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
OUTPUT:
The Input Matrix is:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
17 18 19 20
The Boundary Elements are: 1 2 3 4 5 8 9 12 13 16 17 18 19 20
The Sum of Boundary elements of the Matrix is: 147

SOLUTION:
#include<stdio.h>
#include<limits.h>

int main()
{
    int m, n, sum = 0;
    printf(“\nEnter the order of the matrix : “);
    scanf(“%d %d”,&m,&n);
    int i, j;
    int mat[m][n];
    printf(“\nInput the matrix elements\n”);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            scanf(“%d”,&mat[i][j]);
    }

    printf(“\nBoundary Matrix\n”);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n – 1 || j == n – 1)
            {
                printf(“%d “, mat[i][j]);
                sum = sum + mat[i][j];
            }
            else
                printf(” “);
        }
        printf(“\n”);
    }
    printf(“\nSum of boundary is %d”, sum);
}
