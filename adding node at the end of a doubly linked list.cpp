#include<stdio.h>
#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next,*prev;
};

node * head;

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
		node *temp1=head;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
		temp->prev=temp1;
	}
}

void print()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout << temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void rprint()
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
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout << endl;
		cout<<"Enter the "<<i+1<<"th number : ";
		int x;
		cin>>x;
		insert(x);
		cout<<"Linked list in forward order : ";
		print();
		cout<<"Linked list in reverse order : ";
		rprint();
	}
	return(0);
}
