/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Reverse(Node *head)
{
	struct Node *revHead;
	struct Node *nextNode;

	if(head == NULL || head -> next == NULL)
	{
		return head;
	}

	nextNode = head -> next;
	head -> next = NULL;
	revHead = Reverse(nextNode);
	nextNode -> next = head;

	return revHead;
}