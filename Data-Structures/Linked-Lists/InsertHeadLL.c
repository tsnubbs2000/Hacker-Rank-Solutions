/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/

Node* Insert(Node *head,int data)
{
	struct Node *current = head;
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

	newNode -> data = data;

	if(current == NULL)
	{
		newNode -> next = NULL;
		head = newNode;
		return head;
	}

	else
	{
		newNode -> next = head;
		head = newNode;
		return head;
	}
}
