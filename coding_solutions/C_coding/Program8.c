PROBLEM STATEMENT:
 In Bubble sort, each pass consists of comparison each element in the file with its successor (i.e. x[i] with x[i+1]) and interchanging two elements if they are not in the proper order. The array may be sorted in any pass. If the array is sorted, then remaining passes should be skipped off. Write a C Program to sort an array of integers in ascending order and display the sorted array and Number of passes performed for sorting.


SOLUTION:

#include <stdio.h>
#define MAXSIZE 10
void main()
{
 int array[MAXSIZE];
 int i, j, num, temp,c1=0,c2=0;
 printf("Enter the value of num \n");
 scanf("%d", &num);
 printf("Enter the elements one by one \n");
 for (i = 0; i < num; i++)
 {
 scanf("%d", &array[i]);
 }
 printf("Input array is \n");
 for (i = 0; i < num; i++)
 {
 printf("%d\t", array[i]);
 }
 for (i = 0; i < num; i++)
 {
 for (j = 0; j < (num - i - 1); j++)
 {
 if (array[j] > array[j + 1])
 {
 temp = array[j];
 array[j] = array[j + 1];
 array[j + 1] = temp;
 c1++;
 }
else
c2++;
 }
 }
 printf("\nSorted array is...\n");
 for (i = 0; i < num; i++)
 {
 printf("%d\t", array[i]);
 }
printf("\nTotal Number of passes is : %d\n",c1+c2);
printf("No of passes the values were swaped : %d\n",c1);
printf("No of passes the values were already sorted : %d\n",c2);
}