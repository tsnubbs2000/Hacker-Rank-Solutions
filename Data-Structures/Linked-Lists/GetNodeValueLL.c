/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.

  // I use two nodes in order to iterate until the end of
  // the linked list but still fetch the appropriate node
  // from the tail
  struct Node *iterator = head;
  struct Node *result = head;
  int index = 0;

  while(iterator != NULL)
  {
    iterator = iterator -> next;

    if(index > positionFromTail)
    {
      result = result -> next;
    }

    index++;
  }

  return result -> data;
} 