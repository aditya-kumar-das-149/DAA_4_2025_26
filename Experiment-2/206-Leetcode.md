<img width="1919" height="968" alt="image" src="https://github.com/user-attachments/assets/0c947964-5c36-48c3-b960-3ae186abddd0" />


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
