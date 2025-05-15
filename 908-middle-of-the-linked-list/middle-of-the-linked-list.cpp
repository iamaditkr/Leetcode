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

        if (node==1) return head;
        while(node>1){
            node--;
            temp = temp->next;
        }

        return temp;

        // if(count%2 == 0){
        //     while(it<=count/2 + 1){
        //         temp = temp->next;
        //         it++;
        //     }
        //     return temp;
        // } else{
        //     while(it<=count/2 + 0.5){
        //         temp = temp->next;
        //         it++;
        //     }
        //     return temp;
        // }
        
        
    }
};