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
    ListNode* mergeNodes(ListNode* head) {
        // using extra space by creating new nodes
        // ListNode* temp=head;
        // ListNode* start=temp->next;
        // int sum=0;
        // while(start!=NULL)
        // {
        //     if(start->val!=0)
        //     {
        //         sum+=start->val;
        //     }
        //     else{
        //         ListNode* merge=new ListNode(sum);
        //         sum=0;
        //         temp->next=merge;
        //         temp=temp->next;
        //     }
        //     start=start->next;
        // }
        // return head->next;


        //without using the extra space;
        ListNode* start=head->next;
        ListNode* merge=head;
        int sum=0;
        while(start!=NULL)
        {
            if(start->val!=0)
            {
                sum+=start->val;
            }
            else{
                start->val=sum;
                sum=0;
                merge->next=start;
                merge=start;
            }
            start=start->next;
        }
      return head->next;
    }
};