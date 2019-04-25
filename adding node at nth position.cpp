#include<stdio.h>
#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* link;
};

node* head;

void insert(int x)
{
	node* temp=new node();
	temp->data=x;
	temp->link=head;
	head=temp;
}

void print()
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<endl;
}

void add(int p,int y)
{
	node* temp=head;
	p=p-1;
	for(int i=1;i<p;i++)
	{
		temp=temp->link;
	}
	node* new_node=new node();
	new_node->data=y;
	new_node->link=temp->link;
	temp->link=new_node;
}

int main()
{
	head=NULL;
	cout<<"Enter the number of nodes: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the number: ";
		int x;
		cin>>x;
		insert(x);
		print();
		cout<<endl;
	}
	cout<<"Enter the position at which node is to be added: ";
	int p;
	cin>>p;
	cout<<endl;
	cout<<"Enter the number to be added: ";
	int y;
	cin>>y;
	add(p,y);
	print();
	return(0);
}
