// https://leetcode.com/problems/merge-k-sorted-lists/

/**
 * Definition for singly-linked list.
 * public class Solution
{
    public ListNode insert(ListNode head,ListNode x)
    {
        x.next = null;
        if(head==null)
        {
            return x;
        }
           
        ListNode temp = head;
        while(temp.next!=null)
        {
            temp = temp.next;
        }
        temp.next = x;
        return head;
    }
    
    public ListNode mergeKLists(ListNode[] a)
    {
        PriorityQueue<mix> pq = new PriorityQueue<mix>(new comp());
        for(ListNode i : a)
        {
            if(i!=null)
                pq.add(new mix(i));
        }
       
        ListNode head = null;
       
        while(!pq.isEmpty())
        {
            mix temp = pq.poll();
            ListNode next = temp.node.next;
            head = insert(head,temp.node);
            if(next!=null)
            {
                temp.node = next;
                temp.val = next.val;
                pq.add(temp);
            }
        }
       
        return head;
    }
    
}