void pairWiseSwap(struct node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        {int d=temp->data;
        temp->data=temp->next->data;
        temp->next->data=d;
        temp=temp->next->next;}
        else
        return;
    }
}
