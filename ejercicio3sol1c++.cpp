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
  // Complete this method
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->data=data;
    new_node->next=NULL;
    
    new_node->next=head;
    head=new_node;
    
    return head;
}
