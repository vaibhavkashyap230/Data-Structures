Node* segregate(Node *head)
{
    Node *temp=head;
    int a[3]={0,0,0};
    while(temp!=NULL)
    {
        a[temp->data]++;
        temp=temp->next;
    }
    temp=head;
    for(int i=0;i<a[0];i++)
    {
        temp->data=0;
        temp=temp->next;
    }
    
    for(int i=0;i<a[1];i++)
    {
        temp->data=1;
        temp=temp->next;
    }
    for(int i=0;i<a[2];i++)
    {
        temp->data=2;
        temp=temp->next;
    }
    return head;
}
