/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Delete(Node *head, int position)
{
	int index;
	struct Node *current = head;

	if(position == 0)
	{
		current = head -> next;
		head = current;

		return head;
	}

	for(index = 0; index < position - 1; index++)
	{
		current = current -> next;
	}

	current -> next = current -> next -> next;

	return head;
}