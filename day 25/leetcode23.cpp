class Solution {
public:
    ListNode* merge(ListNode* head1, ListNode* head2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while (head1 && head2) {
            if (head1->val < head2->val) {
                temp->next = head1;
                head1 = head1->next;
            } else {
                temp->next = head2;
                head2 = head2->next;
            }
            temp = temp->next;
        }

        if (head1)
            temp->next = head1;
        if (head2)
            temp->next = head2;

        return dummy->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty())
            return nullptr;

        ListNode* ans = lists[0];
        for (int i = 1; i < lists.size(); i++) {
            ans = merge(ans, lists[i]);
        }
        return ans;
        // ListNode* ans=new ListNode(0);
        // priority_queue<int, vector<int>


        // ListNode* 
    }
};
