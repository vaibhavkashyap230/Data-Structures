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

int main()
{
	head=NULL;
	cout<<"Enter the number of nodes: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cout<<endl;
		cout<<"Enter the number: ";
		cin>>x;
		insert(x);
		print();
	}
	return(0);
}
