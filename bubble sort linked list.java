// https://classroom.codingninjas.com/app/classroom/me/1108/content/27892/offering/289489/problem/332

public class Solution
{
    private static LinkedListNode<Integer> sort(LinkedListNode<Integer> head)
	{
		LinkedListNode<Integer> otemp=head;
        int l=0;
        while(otemp!=null)
        {
            l+=1;
            otemp=otemp.next;
        }
		
        for(int i=0;i<l;i++)
		{
			LinkedListNode<Integer> itemp=head,pre=null;
			while(itemp.next!=null)
			{
				if(itemp.data>itemp.next.data)
				{
					if(itemp==head)
					{
						head=itemp.next;
						itemp.next=head.next;
						head.next=itemp;
						pre=head;
					}
					else
					{
						pre.next=itemp.next;
						itemp.next=itemp.next.next;
						pre.next.next=itemp;
						pre=pre.next;
					}
				}
				else
				{
					pre=itemp;
					itemp=itemp.next;
				}
			}
		}
		
		return head;
	}
	public static LinkedListNode<Integer> bubbleSort(LinkedListNode<Integer> head )
	{
        if(head==null || head.next==null)
            return head;
        
        return sort(head);
	}

}
