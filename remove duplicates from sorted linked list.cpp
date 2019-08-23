Node *removeDuplicates(Node *head)
{
    Node* temp=head;
    
    if(temp==NULL)
    return temp;
    if(temp->next==NULL)
    return temp;
    
    Node *pre=head;
    temp=temp->next;
    while(temp!=NULL)
    {
        if(temp->data==pre->data)
        {
            pre->next=temp->next;
            temp=temp->next;
        }
        else
        {
            pre=temp;
            temp=temp->next;
        }
    }
    return head;
}
