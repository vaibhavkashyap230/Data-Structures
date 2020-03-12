// https://www.interviewbit.com/problems/reorder-list/

public class Solution
{
    public static ListNode rev(ListNode head)
    {
        if(head==null)
        return head;
        
        ListNode temp=head,pre=null;
        while(temp!=null)
        {
            ListNode next=temp.next;
            temp.next=pre;
            pre=temp;
            temp=next;
        }
        return pre;
    }
    public static ListNode merge(ListNode h1,ListNode h2)
    {
        if(h1==null)
            return h2;
        
        if(h2==null)
            return h1;
            
        ListNode head=null,tail=null;
        int f=1;
        while(h1!=null && h2!=null)
        {
            if(f==1)
            {
                if(head==null)
                {
                    head=h1;
                    tail=h1;
                }
                else
                {
                    tail.next=h1;
                    tail=tail.next;
                }
                f=0;
                h1=h1.next;
            }
            else
            {
                if(head==null)
                {
                    head=h2;
                    tail=h2;
                }
                else
                {
                    tail.next=h2;
                    tail=tail.next;
                }
                f=1;
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
    public ListNode reorderList(ListNode head)
    {
        ListNode temp=head;
        int n=0;
        while(temp!=null)
        {
            n+=1;
            temp=temp.next;
        }
        
        ListNode d=null;
        ListNode shead=head;
        if(n%2==1)
        {
            n+=1;
        }
        for(int i=0;i<n/2;i++)
        {
            d=shead;
            shead=shead.next;
        }
        d.next=null;
        shead=rev(shead);
        ListNode nhead=merge(head,shead);
        return nhead;
    }
}