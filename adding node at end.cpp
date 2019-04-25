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
	temp->link=NULL;
	temp->data=x;
	if (head!=NULL)
	{
	 node* temp1=head;
	 while(temp1->link!=NULL)
	 {
		temp1=temp1->link;
	 }
	 temp1->link=temp;
    }
    else
    {
	head=temp;	
	}
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
	int i=0;
	for(i=0;i<n;i++)
	{
		cout<<endl;
		cout<<"Enter the number: ";
		int x;
		cin>>x;
		insert(x);
		print();
	}
	return(0);
}
