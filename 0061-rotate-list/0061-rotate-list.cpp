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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL ||k==0 ) return head;
        ListNode* temp=head;
        int count=0;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        } 
        count++;
        if(k==count || (k>count && k%count==0)) return head;
        k=k%count;
        int br=count-k;
        ListNode* temp1=head;
        while(br>1)
        {
           temp1=temp1->next;
           br--;
        }
        ListNode* ans=temp1->next;
        temp1->next=NULL;
        temp->next=head;
        return ans;
        

        
    }
};