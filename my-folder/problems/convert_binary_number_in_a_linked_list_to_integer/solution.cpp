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
    int getDecimalValue(ListNode* head) {
        int result=0, h;
        string temp="", k;
        while(head!=nullptr){
            h=head->val;
            k=std::to_string(h);
            temp +=k;
            head=head->next;
        }
        int haha=temp.size()-1;
        cout<<haha<<" ";
        for(int i=haha; i>-1; i--){
            cout<<i<<" ";
            if(temp[i]=='1') result += pow(2, haha-i);
        }
        return result;
    }
};