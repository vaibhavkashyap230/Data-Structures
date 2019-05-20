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

void add(int x,int p)
{
	node *temp=head;
	if(p>1)
	{
	for(int i=0;i<p-2;i++)
	{
		temp=temp->link;
	}
	node *aan=new node();
	aan->data=x;
	aan->link=temp->link;
	temp->link=aan;
    }
    else
    {
    	if(p==0)
    	{
    		cout<<"The linked list starts from position 0"<<endl;
		}
		else
		{
			node *temp=new node();
			temp->data=x;
			temp->link=head;
			head=temp;
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
	cout<<"The position to add : ";
	int p;
	cin >> p;
	cout << endl;
	cout << "Enter the "<<p<<" th node : ";
	int np;
	cin >> np;
	cout << endl;
	add(np,p);
	print();
	return(0);
}
