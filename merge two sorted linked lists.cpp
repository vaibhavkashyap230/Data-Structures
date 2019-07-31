#include<vector>
#include<algorithm>
Node* sortedMerge(Node* head1,   Node* head2)
{
    vector<int>v;
    Node *temp=head1;
    while(temp!=NULL)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }
    temp=head2;
    while(temp!=NULL)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }
    sort(v.begin(),v.end());
    Node *head=new Node(v[0]);
    head->data=v[0];
    head->next=NULL;
    temp=head;
    v.erase(v.begin());
    while(v.empty()==0)
    {
        Node *nn=new Node(v[0]);
        nn->data=v[0];
        nn->next=NULL;
        temp->next=nn;
        v.erase(v.begin());
        temp=temp->next;
    }
    return head;
}
