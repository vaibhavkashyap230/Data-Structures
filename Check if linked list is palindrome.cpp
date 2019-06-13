#include<stack>
bool isPalindrome(Node *head)
{
    Node *temp=head;
    stack <int> st;
    while(temp!=NULL)
    {
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(st.top()!=temp->data)
        return 0;
        temp=temp->next;
        st.pop();
    }
    return 1;
}
