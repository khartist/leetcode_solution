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
    ListNode* reverseList(ListNode* head) {
   /*     ListNode* prev=nullptr, *currNext=head, *curr=head;
        while(curr!=nullptr){
            currNext= currNext->next;
            curr->next=prev;
            prev=curr;
            curr=currNext;
        }
        head=prev;
        return head;*/
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode* rest=reverseList(head->next);
        head->next->next=head;
        head->next=nullptr;
        return rest;
    }
};