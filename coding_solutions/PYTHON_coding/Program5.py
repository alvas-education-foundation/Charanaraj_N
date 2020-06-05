PROBLEM STATEMENT:
Write a Python Program to check given number is palindrome or not.

SOLUTION:
n=input("Enter a number : ")
a=n[::-1]
if n==a:
	print("\nIt is Palindrome!!")
else:
	print("\nNot Palindrome!!")