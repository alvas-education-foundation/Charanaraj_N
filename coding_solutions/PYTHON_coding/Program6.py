PROBLEM STATEMNET:
Write a Python Program to find sum of N numbers

SOLUTION:
n=int(input("Enter the number"))
sum=0
for i in range(1,n+1):
	sum=sum+i;
print("Result :",sum);