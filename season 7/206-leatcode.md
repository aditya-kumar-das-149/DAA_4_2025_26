![image alt](https://github.com/aditya-kumar-das-149/DAA_4_2025_26/blob/f6cacb960654cba10682ad8b5b51df29c2012456/season%207/Screenshot%202026-01-26%20190126.png)


    
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
        ListNode* reverseList(ListNode* head) {
            ListNode* temp = head;
            ListNode* prev = NULL;
            while(temp){
                ListNode* front =temp->next;
                temp->next=prev;
                prev=temp;
                temp=front;
            } 
            return prev;
        }
    };
