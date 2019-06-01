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
void insert(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
		node *temp1=head;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
	}
}
void print()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void rotate()
{
	node *last=head;
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=head;
	head=head->next;
	last->next->next=NULL;
}
int main()
{
	insert(0);
	insert(2);
	insert(4);
	insert(6);
	insert(8);
	insert(10);
	cout<<"The linke list is : ";
	print();
	cout<<"Enter the number of rotations : ";
	int r;
	cin>>r;
	for(int i=0;i<r;i++)
	{
		rotate();
	}
	print();
	return 0;
}
