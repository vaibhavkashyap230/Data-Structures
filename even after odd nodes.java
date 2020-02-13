// https://classroom.codingninjas.com/app/classroom/me/1108/content/27892/offering/289489/problem/331

	private static node reorganise(node head)
	{
		if(head==null)
			return head;
		
		node temp=head;
		node ohead=null,otail=null,ehead=null,etail=null;
		
		while(temp!=null)
		{
			if(temp.data%2==0)	//even case
			{
				if(ehead==null)
				{
					ehead=temp;
					etail=temp;
					temp=temp.next;
				}
				else
				{
					etail.next=temp;
					etail=etail.next;
					temp=temp.next;
				}
			}
			else				//odd case
			{
				if(ohead==null)
				{
					ohead=temp;
					otail=temp;
					temp=temp.next;
				}
				else
				{
					otail.next=temp;
					otail=otail.next;
					temp=temp.next;
				}
			}
		}
		
		if(otail==null)
		{
			return ehead;
		}
		otail.next=ehead;
		if(ehead!=null)
		{etail.next=null;}
		return ohead;
	}
