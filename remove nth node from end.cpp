#include<stdio.h>
#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
};

node* insert(node* head,int x)
{
	if(head==NULL)
	{
		node* nn=new node();
		nn->data=x;
		nn->next=NULL;
		return nn;
	}
	
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	
	node* nn=new node();
	nn->data=x;
	nn->next=NULL;
	temp->next=nn;
	
	return head;
}

void print(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

node* rfe(node* head,int n)
{
	int l=0;
	node *temp=head;
	while(temp!=NULL)
	{
		l+=1;
		temp=temp->next;
	}
	
	if(n>=l)
	{
		temp=head;
		head=head->next;
		delete temp;
		return head;
	}
	temp=head;
	for(int i=1;i<l-n;i++)
	{
		temp=temp->next;
	}
	node *tbr=temp->next;
	temp->next=temp->next->next;
	delete tbr;
	
	return head;
}

int main()
{
	node *head=NULL;
	for(int i=1;i<=5;i++)
	{
		head=insert(head,i*10);
	}
	print(head);
	cout<<"Enter number of node from end : ";
	int n;
	cin>>n;
	head=rfe(head,n);
	print(head);
	return(0);
}
