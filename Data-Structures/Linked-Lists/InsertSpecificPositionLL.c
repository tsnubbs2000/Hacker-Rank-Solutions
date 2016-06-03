/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* InsertNth(Node *head, int data, int position)
{
    int index;
    struct Node *current = head;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode -> data = data;

    if(current == NULL)
    {
      head = current;
      return head;
    }

    if(position == 0)
    {
      newNode -> next = head;
      head = newNode;
      return head;
    }

    for(index = 0; index < position - 1; index++)
    {
      current = current -> next;
    }

    newNode -> next = current -> next;
    current -> next = newNode;

    return head;
}