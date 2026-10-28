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
    int lengthofll(ListNode* head){
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;

     }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=lengthofll(head);
        int N=len-n+1;
        if(N==1){
            ListNode*temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        ListNode*temp=head;
        for(int i=1;i<N-1;i++){
            temp=temp->next;
        }
        ListNode*nodetodelete=temp->next;
        temp->next=temp->next->next;
        delete nodetodelete;
        return head;
        
    }
};
