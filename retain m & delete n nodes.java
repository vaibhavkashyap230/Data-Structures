// https://classroom.codingninjas.com/app/classroom/me/1108/content/27892/offering/289489/problem/367

    private static LinkedListNode<Integer> del(LinkedListNode<Integer> head,int m,int n)
	{
		if(head==null)
			return head;
		
		int d=1;
		LinkedListNode<Integer> temp=head,pre=null;
		while(temp!=null)
		{
			if(d==1)
			{
				for(int i=0;i<m && temp!=null;i++)
				{
					pre=temp;
					temp=temp.next;
				}
				d=0;
			}
			else
			{
				for(int i=0;i<n && temp!=null;i++)
				{
					temp=temp.next;
				}
				pre.next=temp;
				d=1;
			}
		}
		
		return head;
	}
