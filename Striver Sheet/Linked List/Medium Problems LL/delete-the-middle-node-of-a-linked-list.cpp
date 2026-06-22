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

// Brute Force  -> TC : O(n + n/2) , SC : O(1)
/*
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL || head -> next == NULL) return NULL;

        int n=0;
        ListNode* temp = head;

        while(temp != NULL){
            n++;
            temp = temp -> next;
        }

        temp = head;
        int res = n/2;
        while(temp != NULL){
            res--;
            if(res == 0){
                ListNode* middle = temp -> next;
                temp -> next = temp -> next -> next;
                delete(middle);
                break;
            }
            temp = temp -> next;
        }
        return head;   
    }
};  */
 
// -----------------------------------------------------------------------------------------------------


// Optimal -> Tortoise & Hare Problem, TC -> O(N/2), SC -> O(1)
// IMP -> We skip the movement of slow but, so that it is always before the middle

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head -> next == NULL) return NULL;

        ListNode* slow = head;
        ListNode* fast = head;
        fast = fast -> next -> next; // Initialize the fast early

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* middle = slow -> next;
        slow -> next = slow -> next -> next;
        delete(middle);
        return head;
    }
};
