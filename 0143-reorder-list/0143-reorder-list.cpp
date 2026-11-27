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
    void reorderList(ListNode* head) {
        ListNode * f=head;
        ListNode * s=head;
        while(f->next!=nullptr&&f->next->next!=nullptr)
        {
            f=f->next->next;
            s=s->next;
        }
       ListNode *middle=s;
       ListNode *prev=nullptr;
       while(middle!=nullptr)
       {
        ListNode *nxt=middle->next;
        middle->next=prev;
        prev=middle;
        middle=nxt;
       }
      
       f=head;
       s=prev;
       while(f)
       {
           ListNode *temp1=f->next;
            ListNode *temp2=s->next;
            f->next=s;
            s->next=temp1;
            f=temp1;
            s=temp2;
       }
        

       
    }
};