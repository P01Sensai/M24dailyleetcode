
/* The approach used to detect cycles in a linked list, 
 which involves two pointers moving at different speeds and checking if they meet, 
 is commonly known as Floyd's Tortoise and Hare algorithm. 
 This algorithm is named after Robert W. Floyd and Donald Knuth 
 (who referred to it as the "tortoise and hare algorithm" in "The Art of Computer Programming"). 
 It's a widely-used and efficient algorithm for detecting cycles in a linked list with a time complexity of O(n) and constant space complexity.
 */


class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) // Check if the linked list is empty or has only one node
            return false;
      // Initialize two pointers: slow and fast

        ListNode *slow = head; // Slow pointer moves one step at a time
        ListNode *fast = head->next; // Fast pointer moves two steps at a time

      // Iterate until either the fast pointer reaches the end of the list or
      // the slow and fast pointers meet

        while (slow != fast) {
          // If fast pointer reaches the end of the list or the next node of the fast pointer is nullptr,
          // it means there is no cycle
            if (fast == nullptr || fast->next == nullptr)
                return false;
         
            slow = slow->next; // Move slow pointer one step forward
            fast = fast->next->next; // Move fast pointer two steps forward
        }

        return true; // If the loop terminates, it means slow and fast pointers met, indicating the presence of a cycle
    }
};
