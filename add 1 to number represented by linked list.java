// https://classroom.codingninjas.com/app/classroom/me/1108/content/27959/offering/290205/problem/1311

public class Solution
{
    private static LinkedListNode<Integer> rev(LinkedListNode<Integer> head)
    {
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
	public static LinkedListNode<Integer> nextLargeNumber(LinkedListNode<Integer> head)
    {
        if(head==null)
        {
            return head;
        }
        
        head=rev(head);
        int c=0;
        head.data+=1;
        if(head.data>9)
        {
            c=1;
            head.data=head.data%10;    
        }
        LinkedListNode<Integer> temp=head.next,pre=head;
        while(temp!=null)
        {
            temp.data+=c;
            c=0;
            if(temp.data>9)
            {
                c=1;
                temp.data=temp.data%10;    
            }
            pre=temp;
            temp=temp.next;
        }
        if(c==1)
        {
            LinkedListNode<Integer> nn=new LinkedListNode<Integer>(1);
            pre.next=nn;
        }
        head=rev(head);
        
        return head;
	}

}