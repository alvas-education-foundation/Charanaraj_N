PROBLEM STATEMENT:
Write a C Program to Display first N Triangular Numbers (Where N is read from the Keyboard)


SOLUTION:
 
#include <stdio.h> 
void triangular_series(int n) 
{ 
	for (int i = 1; i <= n; i++) 
	printf(" %d ", i*(i+1)/2); 
} 
int main() 
{ 
	int n = 5; 
	triangular_series(n); 
	return 0; 
} 