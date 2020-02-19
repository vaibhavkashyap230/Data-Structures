// https://classroom.codingninjas.com/app/classroom/me/1108/content/27959/offering/290205/problem/1340

public class Solution
{
    private static LinkedListNode<Integer> merge(LinkedListNode<Integer> h1,LinkedListNode<Integer> h2)
    {
        if(h1==null)
            return h2;
        if(h2==null)
            return h1;
        
        LinkedListNode<Integer> head=null;
        if(h1.data<h2.data)
        {
            head=new LinkedListNode<Integer>(h1.data);
            h1=h1.next;
        }
        else
        {
            head=new LinkedListNode<Integer>(h2.data);
            h2=h2.next;
        }
        LinkedListNode<Integer> tail=head;
        
        while(h1!=null && h2!=null)
        {
            if(h1.data<h2.data)
            {
                tail.next=h1;
                tail=h1;
                h1=h1.next;
            }
            else
            {
                tail.next=h2;
                tail=h2;
                h2=h2.next;
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
    private static LinkedListNode<Integer> rev(LinkedListNode<Integer> head)
    {
        if(head==null || head.next==null)
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
	public static LinkedListNode<Integer> sort(LinkedListNode<Integer> head)
    {
        if(head==null || head.next==null)
            return head;
        
        LinkedListNode<Integer> nhead=head.next,tail=head,ntail=nhead,temp=nhead.next;
        int c=1;
        
        while(temp!=null)
        {
            if(c==1)
            {
                tail.next=temp;
                tail=temp;
                temp=temp.next;
                c=0;
            }
            else
            {
                ntail.next=temp;
                ntail=temp;
                temp=temp.next;
                c=1;
            }
        }
        tail.next=null;
        ntail.next=null;
        nhead=rev(nhead);
        return merge(head,nhead);
	}

}