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
        if(!head){return head;}
        ListNode *temp,*now,*later;
        now=head;

        later=now->next;
        now->next=nullptr;
        temp=now;
        now=later;
        while(now){
            later=now->next;
            now->next=temp;
            temp=now;
            now=later;
        }
        return temp;
    }
};
