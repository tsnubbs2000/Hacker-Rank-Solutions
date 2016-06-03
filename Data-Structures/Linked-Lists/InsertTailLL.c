/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    struct Node *current = head;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode -> data = data;
    newNode -> next = NULL;
    
    if(current == NULL)
    {
        head = newNode;
        return head;
    }

    else
    {
        while(current -> next != NULL)
        {
            current = current -> next;
        }

        current -> next = newNode;
        return head;
    }
}
