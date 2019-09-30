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
		node *nn=new node();
		nn->data=x;
		nn->next=NULL;
		return nn;
	}
	
	head->next=insert(head->next,x);
	
	return head;
}

void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

node* rearr(node* head)
{
	if(head==NULL)
	return head;
	if(head->next==NULL)
	return head;
	if(head->next->next==NULL)
	return head;
	
	node *ehead=head->next;
	node *etemp=ehead;
	node *temp=ehead->next;
	node *otemp=head;
	
	while(temp!=NULL)
	{
		otemp->next=temp;
		otemp=otemp->next;
		if(temp->next!=NULL)
		{
			etemp->next=temp->next;
			etemp=etemp->next;
		    temp=temp->next->next;
		}
		else
		{
			temp=temp->next;
		}
	}
	otemp->next=ehead;
	etemp->next=NULL;
	return head;
}

int main()
{
	node *head=NULL;
	head=insert(head,1);
	head=insert(head,2);
	head=insert(head,3);
	head=insert(head,4);
	head=insert(head,5);
	head=insert(head,6);
	head=insert(head,7);
	head=insert(head,8);
	print(head);
	head=rearr(head);
	print(head);
	return(0);
}
