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
        if(head==nullptr||head->next==nullptr)
        {
            return head;
        }
        ListNode* a=head;
        ListNode* b=head->next;
        while(b!=nullptr)
        {
            int gcdv=gcd(a->val, b->val);
            ListNode* gcd= new ListNode(gcdv);
            a->next=gcd;
            gcd->next=b;
            a=b;
            b=b->next;
        }
        return head;
    }
};