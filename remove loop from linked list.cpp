void removeTheLoop(Node *head)
{
    unordered_map<Node*,int>ht;
    Node *temp=head,*pre=NULL;
    while(temp->next!=NULL)
    {
        if(ht.find(temp)!=ht.end())
        {
            pre->next=NULL;
            return;
        }
        else
        {
            ht[temp]=1;
            pre=temp;
            temp=temp->next;
        }
    }
}
