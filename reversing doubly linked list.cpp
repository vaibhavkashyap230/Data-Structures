#include<stdio.h>
#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *prev,*next;
};
node *head;
void insert(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		temp->prev=NULL;
	}
	else
	{
		node *it=head;
		while(it->next!=NULL)
		{
			it=it->next;
		}
		it->next=temp;
		temp->prev=it;
	}
}
void print()
{
	node *it=head;
	while (it!=NULL)
	{
		cout<<it->data<<" ";
		it=it->next;
	}
	cout<<endl;
}
void reverse()
{
	node *temp=head;
	node *bef,*aft;
	bef=NULL;
	while(temp!=NULL)
	{
		aft=temp->next;
		temp->next=bef;
		temp->prev=aft;
		bef=temp;
		temp=aft;
	}
	head=bef;
}
int main()
{
	head=NULL;
	insert(0);
	insert(2);
	insert(4);
	insert(6);
	insert(8);
	cout<<"The doubly linked list is : "<<endl;
	print();
	cout<<endl;
	cout<<"The reversed doubly linked list is : "<<endl;
	reverse();
	print();
	return(0);
}
