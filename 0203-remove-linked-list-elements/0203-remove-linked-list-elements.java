/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode prev=head;
        ListNode dummy=head;
         
        while(dummy!=null)
        {
            if((dummy.val)==val)
            {
                prev.next=dummy.next;  
            }
            else
               prev=dummy;
            dummy=dummy.next;
        }
         if(head!=null)
        {
         if(head.val == val)
         {
            head=head.next;
         }
        }
        return head;
    }
}