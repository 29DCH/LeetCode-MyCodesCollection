/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
     public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        if (l1 == null || l2 == null) {
            return null;
        }
        ListNode temp = new ListNode(0);
        ListNode result = temp;

        int value1 = 0;
        int value2 = 0;
        while (l1 != null && l2 != null) {
            value2 = (l1.val + l2.val + value1) % 10;
            value1 = (l1.val + l2.val + value1) / 10;
            temp.next = new ListNode(value2);
            l1 = l1.next;
            l2 = l2.next;
            temp = temp.next;
            if (l1 == null && l2 == null) {
                break;
            }
            if (l1 == null) {
                l1 = new ListNode(0);
            }
            if (l2 == null) {
                l2 = new ListNode(0);
            }
        }
        if (value1 != 0) {
            temp.next = new ListNode(value1);
        }
        return result.next;
    }
}