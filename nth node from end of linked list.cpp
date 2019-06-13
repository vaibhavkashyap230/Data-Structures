int getNthFromLast(Node *head, int n)
{
    Node *temp=head;
    int c=0;
    while(temp!=NULL)
    {
        c+=1;
        temp=temp->next;
    }
    if(n>c)
    return -1;
    temp=head;
    for(int i=0;i<c-n;i++)
    {
        temp=temp->next;
    }
    return temp->data;
}
