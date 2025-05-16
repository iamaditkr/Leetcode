/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        int sum = 0;

        while(temp1 && temp2){
            sum = temp1->val + temp2->val + carry;
            carry = (sum-sum%10)/10;
            ListNode* temp = new ListNode(sum%10);
            current->next = temp;
            current = current->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while(temp1==nullptr && temp2 != nullptr){
            sum = temp2->val + carry;
            carry = (sum-sum%10)/10;
            ListNode* temp = new ListNode(sum%10);
            current->next = temp;
            current = current->next;
            temp2 = temp2->next;
        }
        while(temp1 != nullptr && temp2 == nullptr) {
            sum = temp1->val + carry;
            carry = (sum-sum%10)/10;
            ListNode* temp = new ListNode(sum%10);
            current->next = temp;
            current = current->next;
            temp1 = temp1->next;
        }

        if(carry != 0){
            ListNode* temp = new ListNode(carry);
            current->next = temp;
            
        }


        return dummy->next;
        
    }
};