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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        stack<int> st;
        while(temp){
            st.push(temp->val);
            temp = temp->next;
        }
        ListNode* temp2 = head;
        while(temp2){
            temp2->val = st.top();
            st.pop();
            temp2 = temp2->next;
        }
        return head;
    }
};