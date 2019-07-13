bool isCircular(Node *head)
{
    if(head==NULL)
    return 0;
    
    Node * temp=head;
    if(temp->next==NULL)
    return 0;
    else
    temp=temp->next;
    while(temp!=NULL)
    {
        if(temp==head)
        return 1;
        else
        {
            if(temp->next==NULL)
            return 0;
            else
            temp=temp->next;
        }
    }
    return 1;
}
