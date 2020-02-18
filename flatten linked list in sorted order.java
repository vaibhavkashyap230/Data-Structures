// https://classroom.codingninjas.com/app/classroom/me/1108/content/27955/offering/290191/problem/5749

import java.util.*;
public class Solution
{
    private static LinkedListNode<Integer> insert(LinkedListNode<Integer> head,int x)
    {
        if(head==null)
        {
            LinkedListNode<Integer> nn=new LinkedListNode<Integer>(x);
            return nn;
        }
        
        head.down=insert(head.down,x);
        return head;
    }
	public static LinkedListNode<Integer> flat(LinkedListNode<Integer> head)
    {
        ArrayList<Integer> a=new ArrayList<Integer>();
        LinkedListNode<Integer> temp=head;
        
        while(temp!=null)
        {
            a.add(temp.data);
            LinkedListNode<Integer> d=temp.down;
            while(d!=null)
            {
                a.add(d.data);
                d=d.down;
            }
            temp=temp.right;
        }
        Collections.sort(a);
        LinkedListNode<Integer> nhead=null;
        for(int i=0;i<a.size();i++)
        {
            nhead=insert(nhead,a.get(i));
        }
        return nhead;
	}
}