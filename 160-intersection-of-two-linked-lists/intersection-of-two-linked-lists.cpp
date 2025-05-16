/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempb = headB;

        while(headA){
            while(tempb){
                if (headA == tempb){
                    return headA;
                }
                tempb = tempb->next;
            }
            tempb = headB;
            headA = headA->next;
        }
        return nullptr;
        
    }
    
};