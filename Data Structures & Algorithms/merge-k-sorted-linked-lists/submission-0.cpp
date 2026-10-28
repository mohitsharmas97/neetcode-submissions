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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int>ans;
        for(auto it:lists){
            ListNode *curr=it;
            while(curr!=nullptr){
                ans.push_back(curr->val);
                curr=curr->next;
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.empty()){
            return nullptr;
        }
        ListNode*newhead=new ListNode(ans[0]);
        ListNode*temp=newhead;
        for(int i=1;i<ans.size();i++){
            temp->next=new ListNode(ans[i]);
            temp=temp->next;
        }
        return newhead;
    }
};
