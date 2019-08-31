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

#include<vector>
#include<algorithm>
node* sort(node *head)
{
	vector<int>v;
	node *temp=head;
	while(temp!=NULL)
	{
		v.push_back(temp->data);
		temp=temp->next;
	}
	sort(v.begin(),v.end());
	delete head;
	node *nhead=NULL;
	while(v.empty()==0)
	{
		nhead=insert(nhead,v[0]);
		v.erase(v.begin());
	}
	
	return nhead;
}

int main()
{
	node *head=NULL;
	for(int i=5;i>=0;i--)
	{
		head=insert(head,i*10);
	}
	print(head);
	
	head=sort(head);
	print(head);
	
	return(0);
}
