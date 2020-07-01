// https://practice.geeksforgeeks.org/problems/remove-every-kth-node/1

/* Link list Node
class Node
{
	Node next;
	int data;
	Node(int d)
	{
		data = d;
		next = null;
	}
}*/

class GfG
{
    /*You are required to complete this method*/
    Node delete(Node head, int k)
    {
        if(k==1)
            return null;
        if(k==0)
            return head;
        if(head==null)
            return head;
            
        Node temp = head,prev = null;
        int cur=0;
        while(temp!=null)
        {
            cur+=1;
            if(cur==k)
            {
                prev.next = temp.next;
                temp = temp.next;
                cur=0;
            }
            else
            {
                prev = temp;
                temp = temp.next;
            }
        }
        return head;
    }
}
