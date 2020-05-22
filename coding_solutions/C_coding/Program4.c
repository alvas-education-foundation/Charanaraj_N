PROBLEM STATEMENT:
Write C Program to create Singly Liked List with n elements and reverse the elements using C.
Hint: Crete the SLL, and then Reverse the Link in SLL until Head becomes NULL. Each Time Reversing the Link, Head must be moved to next immediate node.


SOLUTION:
#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node next;
};
struct Node reverse(struct Node head,int k)
{
struct Node current= head;
struct Node next= Null;
struct Node prev= Null;
int count = 0;
while(current!=Null && count<k)
{
next= current->next;
current->next = prev;
prev= current;
current= next;
count++;
}
if ( next!=Null)
head->next= reverse( next,k);
return prev;
}
void push( struct Node ==head_ref,int new_data)
{
struct Node= new_node= (struct Node) malloc(sizeof(struct Node));
}
}
int main()
{
Struct node *prev,*head,*p;
int n,i;
printf ("number of elements:");
scanf("%d",&n);
head=NULL;
for(i=0;i<n;i++)
{
p=malloc(sizeof(struct node));
scanf("%d",&p->data);
p->next=NULL;
if(head==NULL)
head=p;
else
prev->next=p;
prev=p;
}
return 0;
}