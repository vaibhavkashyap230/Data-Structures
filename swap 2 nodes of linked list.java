// https://classroom.codingninjas.com/app/classroom/me/1108/content/27892/offering/289489/problem/326

public class Solution
{
    private static LinkedListNode<Integer> swap(LinkedListNode<Integer> head,int i,int j)
	{
		if(head==null)
			return head;
		
		
		if(i==0)
		{
			LinkedListNode<Integer> p2=head;
			for(int k=0;k<j-1;k++)
			{
				p2=p2.next;
			}
			LinkedListNode<Integer> t2=p2.next;
			
			p2.next=head;
			LinkedListNode<Integer> d=head.next;
			head.next=t2.next;
			t2.next=d;
			
			return t2;
		}
		
		LinkedListNode<Integer> p1=head,t1;
		for(int k=0;k<i-1;k++)
		{
			p1=p1.next;
		}
		t1=p1.next;
		
		LinkedListNode<Integer> p2=head,t2;
		for(int k=0;k<j-1;k++)
		{
			p2=p2.next;
		}
		t2=p2.next;
		
		p1.next=t2;
		p2.next=t1;
		LinkedListNode<Integer> d=t2.next;
		t2.next=t1.next;
		t1.next=d;
		
		return head;
	}
	public static  LinkedListNode<Integer> swap_nodes(LinkedListNode<Integer> head,int i,int j)
    {
        if(i==j)
            return head;
        
        head=swap(head,Math.min(i,j),Math.max(i,j));
        return head;
	}
}
