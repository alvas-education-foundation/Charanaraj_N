PROBLEM STATEMENT:
Write a C Program to rotate the matrix by K times. 
Rotate the matrix by K times means rotating the given NN matrix to the specified (K) number of times. For example, consider the 33 matrix, which has to be rotated once,
Enter the Size of the Matrix: 3, 3
Enter the Elements of the Matrix: 10, 20, 39, 40, 50, 60, 70, 80, 90
Enter the value of K (Number of Rotations): 1
Matrix before Rotation:
10 20 30
40 50 60
70 80 90
Matrix after Rotation:
20 30 10
50 60 40
80 90 70

SOLUTION:
#include <stdio.h>
void shiftArrPos(int *arr, int arrSize)
{
    int i, temp;
      temp = arr[0];
    for(i = 0; i < arrSize-1; i++)
	{
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
}
void arrRotate(int *arr, int arrSize, int rotFrom)
{
    int i;
    for(i = 0; i < rotFrom; i++)
	{
        shiftArrPos(arr, arrSize);
    }
    return;
}
int main()
{
    int arr[10][10];
    int i, j, K, n1, n2;

    printf("Enter the size of the matrix: ");
    scanf("%d%d",&n1,&n2);

    printf("Enter the Elements of the matrix:\n");
    for(i = 0; i < n1; i++)
        for(j = 0; j < n2; j++)
            scanf("%d",&arr[i][j]);

    printf("Enter the value of K: ");
    scanf("%d", &K);

    printf("Matrix before rotation\n");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }

    for(i = 0; i < n1; i++)
        arrRotate(arr[i], n2, K);

     printf("Matrix after rotation\n");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }

    return 0;
}