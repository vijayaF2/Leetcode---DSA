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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy,*add;
        int carry=0;
        while(l1!=NULL && l2!=NULL)
        {
            int n=l1->val+l2->val+carry;
            carry=0;
            if(n<10) add=new ListNode(n);
            else{
                add=new ListNode(n%10);
                carry=n/10;
            }
            temp->next=add;
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        cout<<carry<<" ";
        while(l1!=NULL)
        {
            if(l1->val+carry >=10)
            {
                int t=l1->val;
                l1->val= (l1->val+carry)%10;
                carry=(t+carry)/10;
                cout<<carry<<" ";
            }
            else{
                l1->val=l1->val+carry;
                carry=0;
            }
            temp->next=l1;
            l1=l1->next;
            temp=temp->next;   
        }
         while(l2!=NULL)
        {
            if(l2->val+carry >=10){
                int t=l2->val;
            l2->val= (l2->val+carry)%10;
            carry=(t+carry)/10;
            }
            else{
                l2->val=l2->val+carry;
                carry=0;
            }
            temp->next=l2;
            l2=l2->next;
            temp=temp->next;
        }
        if(carry>0){
             add=new ListNode(carry);
             temp->next=add;
        }
        return dummy->next;
        
    }
};