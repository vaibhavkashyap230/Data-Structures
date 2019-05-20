#include<stdio.h>
#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *link;
};

node *head;

void insert(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->link=NULL;
	
	if (head!=NULL)
	{
		node *temp1=head;
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
	node *temp=head;
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp=temp->link;
	}
	cout << endl;
}

void add(int p)
{
	node *temp=head;
	if (p>1)
	{
	for (int i=0;i<p-2;i++)
	{
		temp=temp->link;
	}
	node *tbd=temp->link;
	temp->link=tbd->link;
	delete tbd;
    }
    else
    {
    	if (p==0)
    	{
    		cout<<"The Linked list starts from index 1."<<endl;
		}
		else
		{
			head=head->link;
		}
	}
}

int main()
{
	head = NULL;
	cout << "Enter the number of nodes : ";
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cout << endl;
		cout << "Enter the "<<i+1<<" th node : ";
		int x;
		cin >> x;
		insert(x);
		print();
	}
	cout << endl;
	cout<<"The position to delete : ";
	int p;
	cin >> p;
	cout << endl;
	add(p);
	print();
	return(0);
}
