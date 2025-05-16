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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp1 = head;
        while(temp1 != NULL){
            count++;
            temp1 = temp1->next;
        }
        ListNode* temp = head;
        int node = 0;
        if (count%2 == 0) node = 0.5*count + 1;
        else node = 0.5*count + 0.5;
        while(node>1){
            node--;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* deleteMiddle(ListNode* head) {
        ListNode* middle = middleNode(head);
        ListNode* temp = head;
        if(temp==middle) return nullptr;
        while(temp->next != middle){
            temp = temp->next;
        }
        temp->next = middle->next;
        middle->next = nullptr;
        delete middle;
        return head;
        
        
    }
};