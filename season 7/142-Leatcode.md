![image alt](https://github.com/aditya-kumar-das-149/DAA_4_2025_26/blob/b7642e5031b27619ef59b25131a67f6f3da12aa4/season%207/Screenshot%202026-01-26%20185850.png)

    class Solution {
    public:
        ListNode *detectCycle(ListNode *head) {
                    ListNode *slow=head;
            ListNode *fast=head;
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
                if(slow==fast){
                    slow=head;
                    while(slow!=fast){
                        slow=slow->next;
                        fast=fast->next;
                    }
                    return slow;
                }
            }
            return NULL;
        }
    };


