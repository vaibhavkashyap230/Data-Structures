#include<stdio.h>
#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
		
		node(int x)
		{
			data=x;
			next=NULL;
		}
};

node* insert(node* head,int x)
{
	node *nn=new node(x);
	nn->next=head;
	return nn;
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

node* ir(node* temp,int pos,int x)
{
	if(temp==NULL)
	return temp;
	
	if(pos>1)
	{
		temp->next=ir(temp->next,pos-1,x);
		return temp;
	}
	
	node* nn=new node(x);
	nn->next=temp->next;
	temp->next=nn;
	return temp;
}
int main()
{
	node *head=NULL;
	head=insert(head,10);
	head=insert(head,20);
	head=insert(head,30);
	head=insert(head,40);
	head=insert(head,50);
	print(head);
	
	int n,x;
	cin>>n>>x;
	if(n==0)
	{
		node *nn=new node(x);
		nn->next=head;
		head=nn;
	}
	else
	{
		head=ir(head,n,x);
	}
	print(head);
	
	return(0);
}
