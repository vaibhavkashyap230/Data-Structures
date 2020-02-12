// https://classroom.codingninjas.com/app/classroom/me/1108/content/27892/offering/289476/problem/1144

public class Solution
{
	public static LinkedListNode<Integer> mergeTwoList(LinkedListNode<Integer> h1, LinkedListNode<Integer> h2)
    {
		LinkedListNode<Integer> head=null,tail=null;
		while(h1!=null && h2!=null)
		{
			if(h1.data<h2.data)
			{
				LinkedListNode<Integer> temp=h1.next;
				if(head==null)
				{
					head=h1;
					tail=h1;
					h1=h1.next;
				}
				else
				{
					tail.next=h1;
					tail=tail.next;
					h1=temp;
				}
			}
			else
			{
				LinkedListNode<Integer> temp=h2.next;
				if(head==null)
				{
					head=h2;
					tail=h2;
					h2=h2.next;
				}
				else
				{
					tail.next=h2;
					tail=tail.next;
					h2=temp;
				}
			}
		}
		
		if(h1!=null)
		{
			tail.next=h1;
		}
		if(h2!=null)
		{
			tail.next=h2;
		}
		
		return head;
	}
}
