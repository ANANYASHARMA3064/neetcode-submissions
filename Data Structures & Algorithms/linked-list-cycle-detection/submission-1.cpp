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
    bool hasCycle(ListNode* head) {
        ListNode* walker = head;
        vector<ListNode*> lst;
        while(walker){
            auto it = find(lst.begin(), lst.end(), walker);
            if(it!=lst.end()){
                return true;
            }
            lst.push_back(walker);
            walker=walker->next;
        }
        return false;
    }
};
