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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* temp = head;
        if(head->next == nullptr) return head;
        while(temp){
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;

        while(temp){
            if(st.top()==temp->val){
                temp = temp->next;
                st.pop();
                continue;
            }
            return false;
        }
        return true;

    }
};