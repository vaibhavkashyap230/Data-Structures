// https://classroom.codingninjas.com/app/classroom/me/1108/content/27955/offering/290190/problem/5732

public class Solution
{
	private static LinkedListNode<Integer> insert(LinkedListNode<Integer> head,int x)
	{
		if(head==null)
		{
			LinkedListNode<Integer> nn=new LinkedListNode<Integer>(x);
			return nn;
		}
		
		head.next=insert(head.next,x);
		return head;
	}
	private static LinkedListNode<Integer> adz(LinkedListNode<Integer> h)
	{
		LinkedListNode<Integer> nn=new LinkedListNode<Integer>(0);
		nn.next=h;
		return nn;
	}
	private static LinkedListNode<Integer> rev(LinkedListNode<Integer> head)
	{
		LinkedListNode<Integer> temp=head,pre=null;
		while(temp!=null)
		{
			LinkedListNode<Integer> next=temp.next;
			temp.next=pre;pre=temp;
			temp=next;
		}
		return pre;
	}
	private static LinkedListNode<Integer> add(LinkedListNode<Integer> h1,LinkedListNode<Integer> h2)
	{
		int l1=0,l2=0;
		LinkedListNode<Integer> temp=h1;
		while(temp!=null)
		{
			l1+=1;
			temp=temp.next;
		}
		temp=h2;
		while(temp!=null)
		{
			l2+=1;
			temp=temp.next;
		}
		if(l1>l2)
		{
			for(int i=0;i<l1-l2;i++)
			{
				h2=adz(h2);
			}
		}
		else
		{
			for(int i=0;i<l2-l1;i++)
			{
				h1=adz(h1);
			}
		}
		
		int c=0;
		h1=rev(h1);
		h2=rev(h2);
		LinkedListNode<Integer> head=null;
		while(h1!=null)
		{
			int d=h1.data+h2.data+c;
			c=0;
			if(d>9)
			{
				c=1;
				d=d%10;
			}
			head=insert(head,d);
			h1=h1.next;
			h2=h2.next;
		}
		if(c==1)
		{
			head=insert(head,1);
		}
		head=rev(head);
		return head;
	}
	public static LinkedListNode<Integer> addNumbers(LinkedListNode<Integer> head1, LinkedListNode<Integer> head2)
    {
        if(head1==null)
            return head2;
        if(head2==null)
            return head1;
        
        return add(head1,head2);
	}
}