// https://classroom.codingninjas.com/app/classroom/me/1108/content/43107/offering/486606/problem/6050

/*
 class ListNode<t> {
    public t data;
    public ListNode<t> next;
    public ListNode(t data)
    {
        this.data=data;
    }
 }
 */

import java.util.*;
public class Solution
{
    public static ListNode<Integer> FindNode(ListNode<Integer> head, int n)
    {
        HashMap<ListNode<Integer>,Integer> hm = new HashMap<ListNode<Integer>,Integer>();
        ListNode<Integer> temp = head;
        while(true)
        {
            if(hm.containsKey(temp))
                break;
            
            hm.put(temp,1);
            temp = temp.next;
        }
        ListNode<Integer> d = head;
        int l = 1;
        while(d!=temp)
        {
            l+=1;
            d=d.next;
        }
        if(l<n+1)
            return null;
        
        d = head;
        for(int i=1;i<l-n;i++)
        {
            d = d.next;
        }
        return d;
    }
}