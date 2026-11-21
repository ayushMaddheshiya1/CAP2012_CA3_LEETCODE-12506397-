class Solution 
{
    public ListNode removeElements(ListNode head, int val) 
    {
        ListNode temp = head;
        ListNode dummy = new ListNode(-1);
        ListNode t = dummy;

        while(temp != null)
        {
            if(temp.val != val)
            {
                t.next = temp;
                t = temp;
            }

            temp = temp.next;
        }
        
        t.next = null;
        return dummy.next;
    }
}