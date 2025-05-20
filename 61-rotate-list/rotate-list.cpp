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
    ListNode* rotateRight(ListNode* head, int k) {
        if (k==0) return head;
        if(head == nullptr || head->next == nullptr){
            return head;
        }
    
        int count = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }

        int iters = k%count;

        while(iters){
            iters--;
            ListNode* temp = head;
            ListNode* prev = head;
            while(prev->next->next){
                prev = prev->next;
            }
            temp = prev->next;
            prev->next = nullptr;
            temp->next = head;
            head = temp;

        }
        return head;
        
    }
};