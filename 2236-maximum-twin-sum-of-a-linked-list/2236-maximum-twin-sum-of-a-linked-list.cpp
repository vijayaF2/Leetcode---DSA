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
    int pairSum(ListNode* head) {
        // using extra space o(n):------
        // int sum=INT_MIN;
        // vector<int>v;
        // while(head!=NULL)
        // {
        //     v.push_back(head->val);
        //     head=head->next;
        // }
        // int i=0,j=v.size()-1;
        // while(i<j)
        // {
        //     sum=max(sum,v[i]+v[j]);
        //     i++;
        //     j--;
        // }
        // return sum;

        // without using the extra space
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev=NULL,*front;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            front=slow->next;
            slow->next=prev;
            prev=slow;
            slow=front;
        }
        int sum=0;
        while(prev!=NULL)
        {
            sum=max(sum,prev->val+slow->val);
            slow=slow->next;
            prev=prev->next;
        }
        return sum;

        
    }
};