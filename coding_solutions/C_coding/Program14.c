PROBLEM STATEMENT:
Write a program in C to rotate an array by N positions.
Expected Output :
The given array is : 0 3 6 9 12 14 18 20 22 25 27
Enter the Position N from where you want to rotate: 4
From 4th position the values of the array are : 12 14 18 20 22 25 27
Before 4th position the values of the array are : 0 3 6 9
After rotating from 4th position the array is:
12 14 18 20 22 25 27 0 3 6 9

SOLUTION:
#include <stdio.h> 
void leftRotatebyOne(int arr[], int n); 
void leftRotate(int arr[], int d, int n) 
{ 
    int i; 
    for (i = 0; i < d; i++) 
        leftRotatebyOne(arr, n); 
} 
void leftRotatebyOne(int arr[], int n) 
{ 
    int temp = arr[0], i; 
    for (i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
    arr[i] = temp; 
} 
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
	printf("\n");
} 
int main() 
{ 
	int n,d;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the array elements :\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the Position N from where you want to rotate : ");
	scanf("%d",&d);
	leftRotate(arr, d, n); 
	printArray(arr, n); 
	return 0; 
} 
