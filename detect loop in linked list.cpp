int detectloop(Node *head)
{
    Node *h1=head;
    Node *h2=head;
    if(head==NULL)
    return 0;
    while(h2!=NULL)
    {
        h1=h1->next;
        h2=h2->next;
        if(h2==NULL)
        return 0;
        h2=h2->next;
        if(h1==h2)
        return 1;
    }
    return 0;
}
