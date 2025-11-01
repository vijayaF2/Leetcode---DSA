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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        ListNode* dummy=new ListNode(0);
        ListNode* ans=dummy;
        while(head!=NULL)
        {
            if(m[head->val]<=0)
            {
                ListNode* d=new ListNode(head->val);
                dummy->next=d;
                dummy=dummy->next;
            }
             // cout<<head->val<<" ";
            head=head->next;
           
        }
        return ans->next;
    }
};