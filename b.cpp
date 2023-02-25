B) Main Code: 
/*To find the kth to last element of a linked list, we can use a two-pointer technique. We can have two 
pointers p1 and p2 initially pointing to the head of the linked list. We can then move p2 k nodes ahead of 
p1. After this, we can move both pointers p1 and p2 one node at a time until p2 reaches the end of the 
linked list. At this point, p1 will be pointing to the kth to last element of the linked list. Here is the code 
to find the kth to last element of a linked list: */

#include <stdio.h> 
#include <stdlib.h> 
typedef struct Node { 
 int data; 
 struct Node* next; 
} Node; 
void printKthToLast(Node* head, int k) 
{ 
 Node* p1 = head; 
 Node* p2 = head; 
 for (int i = 0; i < k; i++) { 
 if (p2 == NULL) { 
 return; 
 } 
 p2 = p2->next; 
 } 
 
 while (p2 != NULL) { 
 p1 = p1->next; 
 p2 = p2->next; 
 } 
 printf("%d", p1->data); 
 return; 
} 
void push(Node** head_ref, int new_data) 
{ 
 
 Node* new_node = (Node*)malloc(sizeof(Node)); 
 
 new_node->data = new_data; 
 
 new_node->next = (*head_ref); 
 
 (*head_ref) = new_node; 
} 
int main() 
{ 
 /* Start with the empty list */ 
 Node* head = NULL; 
 // create linked 35->15->4->20 
 push(&head, 20); 
 push(&head, 4); 
 push(&head, 15); 
 push(&head, 35); 
 // Function call 
 printKthToLast(head, 2); 
 return 0; 
} 
/*
In this code, the printKthToLast function takes a linked list and an integer k as input and prints the kth to 
last element of the linked list. The function initializes two pointers p1 and p2 to the head of the linked list 
and moves p2 k nodes ahead of p1. After this, it moves both pointers p1 and p2 one node at a time until 
p2 reaches the end of the linked list. At this point, p1 will be pointing to the kth to last element of the 
linked list, which is then printed to the console. 
The main function calls the printKthToLast function to find the 2nd to last element of the linked list 
"35->15->4->20". The resulting output "4" is then printed to the console. */

Bonus 1: 
/*
To minimize the number of times you run through the loop, you can use two pointers to traverse the 
linked list. The first pointer starts at the beginning of the list and advances k nodes. Then, both pointers 
move forward together until the first pointer reaches the end of the list. At this point, the second pointer 
is pointing to the kth-to-last element. 
Here is the updated code using two pointers: 
/* Function to get the kth node from the last of a linked list*/ 
*/
void printKthFromLast(Node* head, int k) 
{ 
 Node *p1 = head, *p2 = head; 
 int i; 
 // Move p1 k nodes into the list 
 for (i = 0; i < k; i++) { 
 if (p1 == NULL) return; // Out of bounds 
 p1 = p1->next; 
 } 
 // Move both pointers at the same time 
 while (p1 != NULL) { 
 p1 = p1->next; 
 p2 = p2->next; 
 } 
 // p2 now points to the kth-to-last node, so print its value 
 printf("%d", p2->data); 
} 
/*
With this approach, the loop runs only once, so it is more efficient than the previous approach where we 
first calculated the length of the list and then traversed it again.*/
