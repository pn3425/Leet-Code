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
 //---------------------- BRUTE FORCE : TC -> O(2n), SC -> O(1) -------------------------------------------------

/*class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL) return NULL;

        int cnt = 0;
        ListNode* temp = head;

        while(temp != NULL){
            cnt++;        // Get the count
            temp = temp -> next;
        }

        if(cnt == n){   // If for first node itself
            ListNode* newhead = head -> next; // Assign newhead
            delete head;
            return newhead;
        }

        int res = cnt - n;  // Difference will take you to the node befor the node to be deleted
        temp = head;

        while(temp != NULL){
            res--;  
            if(res == 0){  // Do res--, until 0, then break, come out of loop
                break;
            }
            temp = temp -> next;
        }
        ListNode* delNode = temp -> next;  //Since currently we stand at node just before node to be deleted, save the deleted node
        temp -> next = temp -> next -> next;  //Make the correct connection
        delete delNode;  // Free the nodeto be deleted
        return head;
    }
};*/

//-------------------------- Optimal : TC -> O(len), SC -> O(1) -----------------------------------------

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        for(int i=0 ; i<n ; i++){
            fast = fast -> next;
        }

        if(fast == NULL) return head -> next;

        while(fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next;
        }
        ListNode* delnode = slow -> next;
        slow -> next = slow -> next -> next;
        delete delnode;
        return head;
    }
};
