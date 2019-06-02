#include<stdio.h>
#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
node *head=NULL;
bool isEmpty()
{
	if(head==NULL)
	return 1;
	return 0;
}
void enqueue(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
		node *it=head;
		while(it->next!=NULL)
		{
			it=it->next;
		}
		it->next=temp;
	}
}
void dequeue()
{
	if(isEmpty())
	{
		cout<<"The queue is empty.";
		return;
	}
	head=head->next;
}
void print()
{
	cout<<"Queue : ";
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int top()
{
	return head->data;
}
int main()
{
	enqueue(0);print();
	enqueue(2);print();
	enqueue(4);print();
	enqueue(6);print();
	enqueue(8);print();
	dequeue();print();
	dequeue();print();
	dequeue();print();
	dequeue();print();
	return(0);
}
