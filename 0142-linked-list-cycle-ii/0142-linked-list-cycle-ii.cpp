/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode*fast=head;
    ListNode*slow=head;
    bool cycle=false;
    while(fast!=nullptr &&fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            cycle=true;
            break;
            
            
        }
    }
    
    
    if (cycle!=true){
        return nullptr;
        }
        slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
        return slow;
    
    
    }
};