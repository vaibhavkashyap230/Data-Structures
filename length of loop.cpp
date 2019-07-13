int countNodesinLoop(struct Node *head)
{
    if(head==NULL)
    return 0;
    
    Node *t1=head,*t2=head;
    
    if(t1->next==NULL)
    return 0;
    else
    t1=t1->next;
    
    if(t1->next==NULL)
    return 0;
    else
    t2=t1->next;
    
    while(t1!=t2)
    {
    if(t1->next==NULL)
    return 0;
    else
    t1=t1->next;
    
    if(t2->next==NULL)
    return 0;
    else
    {
        if(t2->next->next==NULL)
        return 0;
        else
        t2=t2->next->next;
    }
    }
    
    int c=1;
    t1=t1->next;
    while(t1!=t2)
    {
        t1=t1->next;
        c+=1;
    }
    return c;
}
