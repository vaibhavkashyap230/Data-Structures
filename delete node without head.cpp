void deleteNode(Node *node)
{
    Node *temp=node;
    while(temp->next->next!=NULL)
    {
        temp->data=temp->next->data;
        temp=temp->next;
    }
    temp->data=temp->next->data;
    temp->next=NULL;
}
