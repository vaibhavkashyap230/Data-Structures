#include<stdio.h>
#include<iostream>

using namespace std;

class node
{
	public:
		int data;
		node *next;
};

node *head;

void insert(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		node *temp1=head;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
	}
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

void reverse()
{
	node *temp=head;
	node *bef,*aft;
	bef = NULL;
	while(temp!=NULL)
	{
		aft=temp->next;
		temp->next=bef;
		bef=temp;
		temp=aft;
	}
	head=bef;
}

int main()
{
	head = NULL;
	cout << "Enter the number of nodes : ";
	int n;
	cin >> n;
	cout <<endl;
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		cout<< "Enter the "<<i+1<<" th node : ";
		int x;
		cin >> x;
		insert(x);
		print();
	}
	cout<<endl;
	cout << "The reversed linked list is : "<<endl;
	reverse();
	print();
	return(0);
}
