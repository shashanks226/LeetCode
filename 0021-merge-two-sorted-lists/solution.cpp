// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* temp1=list1;
//         ListNode* temp2=list2;
//         ListNode* n=new ListNode(0);
//         ListNode* tail=n;
//         while(temp1 && temp2)
//         {
//             if(temp1->val<=temp2->val)
//             {
//                 tail->next=temp1;
//                 tail=temp1;
//                 temp1=temp1->next;
//             }
//             else 
//             {
//                 tail->next=temp2;
//                 tail=temp2;
//                 temp2=temp2->next;
//             }
//         }
//         if(temp1)
//         {
//             tail->next=temp1;
//             tail=temp1;
//         }
//         if(temp2)
//         {
//             tail->next=temp2;
//             tail=temp2;
//         }
//         return n->next;
//     }
// };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Base cases
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        // Recursive step
        if (list1->val <= list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};

