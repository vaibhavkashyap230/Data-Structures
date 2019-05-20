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
	temp->next=head;
	temp->prev=NULL;
	if(head!=NULL)
	{
		head->prev=temp;
	}
	head=temp;
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

rprint()
{
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->prev;
	}
	cout<<endl;
}

int main()
{
	head=NULL;
	cout<<"Enter the number of nodes : ";
	int n;
	cin >> n;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		cout<<"Enter the "<<i+1<<"th node : ";
		int x;
		cin >> x;
		insert(x);
		print();
		rprint();
	}
	return(0);
}
