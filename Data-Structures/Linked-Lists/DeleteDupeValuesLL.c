/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.

	struct Node *current = head;

	while(current != NULL)
	{
		if(current -> next -> data == current -> data)
		{
			current -> next = current -> next -> next;
		}

		else
		{
			current = current -> next;
		}
	}

	return head;
}