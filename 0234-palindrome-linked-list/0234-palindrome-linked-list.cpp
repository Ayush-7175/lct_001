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
        ListNode*s=head;
        ListNode*f=head;
        while(f->next!=nullptr&&f->next->next!=nullptr)
        {
            f=f->next->next;
            s=s->next;
        }
        ListNode* middle =s;
        ListNode* st = middle->next;
        ListNode* pre = nullptr;
        while(st!=nullptr)
        {
            ListNode* next=st->next;
            st->next=pre;
            pre=st;
            st=next;
        }
        ListNode* newer=pre;
        s=head;
        while(newer!=nullptr)
        {
           if(s->val!=newer->val)
           {
            return false;
           }
           else{
            s=s->next;
            newer=newer->next;
           }
        }
        return true;
    }
};