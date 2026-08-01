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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* trav = head;

        if(trav == nullptr)
        {
            return head;
        }
        while(trav->next!=nullptr)
        {
            ListNode* temp = trav->next;
            if(temp->val == trav->val)
            {
                trav->next = temp->next;
            }
            else
            {
                trav = trav->next;
            }
        }
        return head;
    }
};
