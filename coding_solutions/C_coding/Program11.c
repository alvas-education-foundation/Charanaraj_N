PROBLEM STATEMENT:
Write a C Program to find the leaders in the array
Note: An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N denoting the size of array.
The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print all the leaders.

Constraints:
1 <= T <= 100
1 <= N <= 107
0 <= Ai <= 107

Example:

Input:
3
6
16 17 4 3 5 2
5
1 2 3 4 0
5
7 4 5 7 3

Output:
17 5 2
4 0
7 7 3

SOLUTION:
#include <stdio.h>
void main()
{
 int i,t,arr[100],n,max[100],j=0,k;
printf("Enter the test cases\n");
scanf("%d",&t);
for(int k=0;k<t;k++)
{
printf("Enter size of array\n");
 scanf("%d",&n);
printf("Enter array elements\n");
 for(i=0; i<n; i++)
 {
 scanf("%d",&arr[i]);
 max[i]=0;
 }
 max[j++] = arr[n-1];
 for(i=n-1; i>=0; i=i-1)
 if( arr[i] >= max[j-1] )
 {
 max[j] = arr[i];
 j++;
 }
printf("OUTPUT : ");
 for(j=j-1; j>0; j--)
 printf("%d ",max[j]);
printf("\n***************************\n");
}
}