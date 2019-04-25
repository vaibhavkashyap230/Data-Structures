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
	node* it=head;
	while(it!=NULL)
	{
		cout<<it->data<<" ";
		it=it->link;
	}
	cout<<endl;
}

void remove(int i)
{
	node* temp=head;
	int j=0;
	if(i>1)
	{
	for(j=0;j<i-2;j++)
	{
		temp=temp->link;
	}
		node*temp1=temp->link;
		temp->link=temp1->link;
		delete temp1;
    }
    else
    {
    	node* temp=head->link;
    	head=temp;
	}
}

int main ()
{
	cout<<"Enter the number of nodes: ";
	int n;
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		cout<<"Enter the number: ";
		int x;
		cin>>x;
		insert(x);
		print();
	}
	cout<<endl;
	cout<<"Enter the index of node to be deleted: ";
	int i;
	cin>>i;
	cout<<endl;
	remove(i);
	print();
	return(0);
}
