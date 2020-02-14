// https://classroom.codingninjas.com/app/classroom/me/1108/content/27892/offering/289479/problem/17

public class Solution
{
    public static LinkedListNode middle(LinkedListNode<Integer> head)
    {
        LinkedListNode<Integer>t1=head,t2=head;
        while(true)
        {
            if(t2.next==null || t2.next.next==null)
            {
                return t1;
            }
            t1=t1.next;
            t2=t2.next.next;
        }
    }
    public static LinkedListNode<Integer> merge(LinkedListNode<Integer> h1, LinkedListNode<Integer> h2)
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
	public static LinkedListNode<Integer> mergeSort(LinkedListNode<Integer> head)
    {
        if(head==null || head.next==null)
        {
            return head;
        }
        
        LinkedListNode mid=middle(head);
        LinkedListNode f=head;
        LinkedListNode s=mid.next;
        mid.next=null;
        f=mergeSort(f);
        s=mergeSort(s);
        
        head=merge(f,s);
        return head;
	}
}
