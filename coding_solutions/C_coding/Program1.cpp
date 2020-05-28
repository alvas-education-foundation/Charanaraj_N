PROBLEM STATEMENT:
Given an array arr[] of size N and an integer K. The task is to find the last remaining element in the array after reducing the array
The rules for reducing the array are:
#The first and last element say X and Y are chosen and removed from the array arr[].
#The values X and Y are added. Z = X + Y.
#Insert the value of Z % K into the array arr[] at the position ((N/2) + 1)th position, where N denotes the current length of the array.

Examples:
Input: N = 5, arr[] = {1, 2, 3, 4, 5}, K = 7
Output: 1
Explanation:
The given array arr[] reduces as follows:
{1, 2, 3, 4, 5} -> {2, 6, 3, 4}
{2, 6, 3, 4} -> {6, 6, 3}
{6, 6, 3} -> {2, 6}
{2, 6} -> {1}
The last element of A is 1.

SOLUTION:

#include <iostream> 
using namespace std; 
int find_value(int a[], int n, int k) 
{ 
	int sum = 0; 
	for (int i = 0; i < n; i++) { 
		sum += a[i]; 
	} 
	return sum % k; 
} 
int main() 
{ 
	int n, k,a[20]; 
	cout<<"Enter the number of element\n";
	cin>>n;
	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the vake of K\n";
	cin>>k;
	cout<<"The last remaining element : "<< find_value(a, n,k)<<endl;  
	return 0; 
} 