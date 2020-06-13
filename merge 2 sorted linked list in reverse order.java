// https://practice.geeksforgeeks.org/problems/merge-2-sorted-linked-list-in-reverse-order/1

/* class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
} */

class GfG
{
    Node reverse(Node head)
	{
		Node temp = head,pre=null,aft=null;
		while(temp!=null)
		{
			aft = temp.next;
			temp.next = pre;
			pre = temp;
			temp = aft;
		}
		return pre;
	}
    
    Node mergeResult(Node head1, Node head2)
    {
		Node head=null,tail=null;
		while(head1!=null && head2!=null)
		{
			if(head1.data<head2.data)
			{
				if(head==null)
				{
					head = head1;
					tail = head1;
				}
				else
				{
					tail.next = head1;
					tail = tail.next;
				}
				head1 = head1.next;
			}
			else
			{
				if(head==null)
				{
					head = head2;
					tail = head2;
				}
				else
				{
					tail.next = head2;
					tail = tail.next;
				}
				head2 = head2.next;
			}
		}
		if(head1!=null)
		{
			tail.next = head1;
		}
		if(head2!=null)
		{
			tail.next = head2;
		}
		return reverse(head);
    }
}
