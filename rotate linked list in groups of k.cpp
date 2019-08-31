node* insert(node* head,int x)
{
    if(head==NULL)
    {
        node *nn=new node();
        nn->data=x;
        nn->next=NULL;
        return nn;
    }
    
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    node *nn=new node();
    nn->data=x;
    nn->next=NULL;
    temp->next=nn;
    
    return head;
}
#include<vector>
struct node *reverse (struct node *head, int k)
{
    vector<int>v;
    node *temp=head;
    while(temp!=NULL)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }
    int n=v.size();
    for(int i=0;i<n;)
    {
        int s=i;
        int e=min(i+k-1,n-1);
        while(s<=e)
        {
            int d=v[s];
            v[s]=v[e];
            v[e]=d;
            s+=1;
            e-=1;
        }
        i+=k;
    }
    delete head;
    node *nhead=NULL;
    for(int i=0;i<n;i++)
    {
        nhead=insert(nhead,v[i]);
    }
    return nhead;
}
