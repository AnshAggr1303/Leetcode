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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr= head;
        while(curr!= nullptr && curr->next != nullptr){
            ListNode* next=curr->next;
            int g= gcd(curr->val,next->val);
            ListNode* node= new ListNode(g);
            node->next=next;
            curr->next=node;
            curr=next;
            
        }
        return head;
    }
};