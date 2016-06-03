/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

void ReversePrint(Node *head)
{
    while(head != NULL)
    {
        ReversePrint(head -> next);
        printf("%d\n", head -> data);
    }
}
