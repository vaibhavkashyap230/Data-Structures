// https://classroom.codingninjas.com/app/classroom/me/1108/content/27955/offering/290192/problem/5756

import java.util.*;

public class Solution
{
    private static Node insert(Node temp,int x)
    {
        if(temp==null)
        {
            Node nn=new Node(x,null,null);
            return nn;
        }
        
        temp.next=insert(temp.next,x);
        
        return temp;
    }
    public static void flattenListCorrect(Node hp)
    {
        if(hp==null)
            return;
        
        Deque<Node> dq = new LinkedList<Node>();
        ArrayList<Integer> a=new ArrayList<Integer>();
        dq.addFirst(hp);
        while(dq.size()>0)
        {
            Node temp=dq.peekFirst();
            dq.removeFirst();
            a.add(temp.data);
            if(temp.next!=null)
            {
                dq.addFirst(temp.next);
            }
            if(temp.down!=null)
            {
                dq.addLast(temp.down);
            }
        }
        hp.next=null;
        hp.down=null;
        for(int i=1;i<a.size();i++)
        {
            hp=insert(hp,a.get(i));
        }
    }
}