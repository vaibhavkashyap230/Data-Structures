// https://classroom.codingninjas.com/app/classroom/me/1108/content/27892/offering/289489/problem/7

public class Solution
{
    private static LinkedListNode<Integer> rev(LinkedListNode<Integer> head)
	{
		if(head==null)
			return head;
		
		LinkedListNode<Integer> temp=head,pre=null;
		while(temp!=null)
		{
			LinkedListNode<Integer> next=temp.next;
			temp.next=pre;
			pre=temp;
			temp=next;
		}
		return pre;
	}
	private static LinkedListNode<Integer> krev(LinkedListNode<Integer> head,int k)
	{
		int l=0;
		LinkedListNode<Integer> temp=head;
		while(temp!=null)
		{
			l+=1;
			temp=temp.next;
		}
		if(k>=l)
		{
			return rev(head);
		}
		
		temp=head;
		LinkedListNode<Integer> pre=null;
		for(int i=0;i<k;i++)
		{
			LinkedListNode<Integer> next=temp.next;
			temp.next=pre;
			pre=temp;
			temp=next;
		}
		LinkedListNode<Integer> nhead=pre,tail=head;
		while(temp!=null)
		{
			LinkedListNode<Integer> ntail=temp;
			pre=null;
			for(int i=0;i<k && temp!=null;i++)
			{
				LinkedListNode<Integer> next=temp.next;
				temp.next=pre;
				pre=temp;
				temp=next;
			}
			tail.next=pre;
			tail=ntail;
		}
		return nhead;
	}
	public static LinkedListNode<Integer> kReverse(LinkedListNode<Integer> head, int k)
    {
        return krev(head,k);
    }
}
