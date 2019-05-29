#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
node *head=NULL;
void insert(int x)
{
node *temp=new node();
temp->data=x;
temp->next=head;
head=temp;
}
void print()
{
	cout<<"The linked list is : ";
node *temp=head;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<endl;
}
void reverse()
{
	stack <node*> s;
	node *temp=head;
	while(temp!=NULL)
	{
		s.push(temp);
		temp=temp->next;
	}
	node *nhead;
	nhead=s.top();
	temp=nhead;
	s.pop();
	while(!s.empty())
	{
		temp->next=s.top();
		temp=s.top();
		if(temp==head)
		temp->next=NULL;
		s.pop();
	}
	head=nhead;
}
int main()
{
	insert(0);
	print();
	insert(2);
	print();
	insert(4);
	print();
	insert(6);
	print();
	reverse();
	cout<<"After reversing ";
	print();
	return(0);
}
