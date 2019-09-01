Node *compute(Node *temp)
{
    if(temp->next==NULL)
    return temp;
    
    temp->next=compute(temp->next);
    
    if(temp->next->data>temp->data)
    return temp->next;
    
    else
    return temp;
}
