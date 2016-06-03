/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

//typedef enum {FALSE, TRUE} bool;

int CompareLists(Node *headA, Node* headB)
{
  struct Node *currentA = headA;
  struct Node *currentB = headB;

  while(currentA != NULL && currentB != NULL)
  {
    if(currentA -> data != currentB -> data)
    {
      return 0;
    }

    currentA = currentA -> next;
    currentB = currentB -> next;

    if(currentA == NULL && currentB != NULL)
    {
      return 0;
    }

    if(currentB == NULL && currentA != NULL)
    {
      return 0;
    }
  }

  return 1;
}
