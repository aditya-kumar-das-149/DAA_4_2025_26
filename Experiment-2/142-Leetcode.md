<img width="1913" height="969" alt="image" src="https://github.com/user-attachments/assets/54a521cf-dbb1-4a34-b953-462426de0d6f" />

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
