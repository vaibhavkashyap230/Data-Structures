public class Rev_Double
{
	private static DoublyLinkedListNode insert(DoublyLinkedListNode head,int x)
	{
		if(head==null)
		{
			DoublyLinkedListNode nn=new DoublyLinkedListNode(x);
			return nn;
		}
		
		DoublyLinkedListNode temp=head;
		while(temp.next!=null)
		{
			temp=temp.next;
		}
		DoublyLinkedListNode nn=new DoublyLinkedListNode(x);
		nn.prev=temp;
		temp.next=nn;
		
		return head;
	}
	private static void print(DoublyLinkedListNode h)
	{
		DoublyLinkedListNode head=h;
		while(head.next!=null)
		{
			System.out.print(head.data+" ");
			head=head.next;
		}
		System.out.print(head.data);
		System.out.println();
		while(head!=null)
		{
			System.out.print(head.data+" ");
			head=head.prev;
		}
		System.out.println();
	}
	private static DoublyLinkedListNode rev(DoublyLinkedListNode head)
	{
		if(head==null)
			return head;
		
		DoublyLinkedListNode temp=head,pre=null;
		while(temp!=null)
		{
			DoublyLinkedListNode next=temp.next;
			temp.next=pre;
			pre=temp;
			temp=next;
		}
		
		head=pre;
		pre=null;
		temp=head;
		while(temp!=null)
		{
			temp.prev=pre;
			pre=temp;
			temp=temp.next;
		}
		return head;
	}
	private static DoublyLinkedListNode merge(DoublyLinkedListNode h1,DoublyLinkedListNode h2)
	{
		DoublyLinkedListNode head=null;
		
		while(h1!=null && h2!=null)
		{
			if(h1.data<h2.data)
			{
				head=insert(head,h1.data);
				h1=h1.next;
			}
			else
			{
				head=insert(head,h2.data);
				h2=h2.next;
			}
		}
		while(h1!=null)
		{
			head=insert(head,h1.data);
			h1=h1.next;
		}
		if(h2!=null)
		{
			head=insert(head,h2.data);
			h2=h2.next;
		}
		
		return head;
	}
	private static DoublyLinkedListNode sort(DoublyLinkedListNode head)
	{
		DoublyLinkedListNode temp=head;
		boolean f=true;
		while(temp!=null)
		{
			if(temp.next!=null)
			{
				if(temp.data>temp.next.data)
				{
					f=false;
					break;
				}
			}
			temp=temp.next;
		}
		if(f==true)
		{
			return head;
		}
		
		DoublyLinkedListNode head2=temp.next;
		temp.next=null;
		head2=rev(head2);
		print(head);
		print(head2);
		DoublyLinkedListNode nhead=merge(head,head2);
		return nhead;
	}
	public static void main(String[] args)
	{
		DoublyLinkedListNode head=null;
		head=insert(head,1);
		head=insert(head,4);
		head=insert(head,6);
		head=insert(head,7);
		head=insert(head,8);
		head=insert(head,5);
		head=insert(head,3);
		head=insert(head,2);
		print(head);
		head=sort(head);
		print(head);
	}
}