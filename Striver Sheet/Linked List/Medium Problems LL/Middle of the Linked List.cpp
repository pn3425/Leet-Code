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

//---------------------------- Brute Force : TC -> O (n/2 + n), SC -> O(1)---------------------------------------- 

/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        Step 1: Get the count of the no.of nodes in LL

        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            cnt++;
            temp = temp -> next;
        }
         int MidNode = ((cnt/2) + 1);
         temp = head;

        Step 2: Now reduce the MidNode and the moment where it get reduced to 0, so the node at temp would be Middle

         while(temp != NULL){
            MidNode = MidNode - 1;
            if(MidNode == 0){
                break;
            }
            temp = temp -> next;
         }
         return temp;
    }
};
*/

//-------------------------- Optimal Force : TC -> O (n/2), SC -> O(1), Tortise & Hare -------------------------- 

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
};
