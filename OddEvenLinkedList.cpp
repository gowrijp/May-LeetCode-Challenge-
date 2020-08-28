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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return NULL;
        ListNode* tmp = head;
        while(tmp->next && tmp->next->next)         //To get to the last element of odd index
        {
            tmp = tmp->next->next;
        }
        ListNode* tmp1 = NULL;
        if(tmp->next)                               //To check and save if any even index element is left at the end
            tmp1 = tmp->next;
        ListNode* root = head;
        ListNode* root1 = tmp;
        while(root!=tmp)                            //Traversing the list and changing the pointers appropriately
        {
            root1->next = root->next;
            root->next = root->next->next;
            root = root->next;
            root1 = root1->next;
        }
        if(tmp1)                                    //If the last element with even index is there then add it otherwise
        {                                           //just add NULL
            root1->next = tmp1;
            root1->next->next = NULL;
        }
        else root1->next = NULL;
        return head;
    }
            
};
