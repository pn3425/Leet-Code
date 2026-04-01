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

//--------------------------- BRUTE FORCE : TC & SC -> O(2N) , O(N) (Using Stack) ---------------------------------

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* temp = head;
//         stack<int> st;

//         // Step 1: Access data of LL and push in the stack
//         while(temp != NULL){
//             st.push(temp -> val);
//             temp = temp -> next;
//         }

//         temp = head; // Reset temp to head for iterating again

//         while(temp != NULL){
//             temp -> val = st.top();
//             st.pop();
//             temp = temp -> next;
//          }
//     return head;
//     }
// };
 
//------------- OPTIMAL -> TC -> O(N), SC -> O(1) (NO EXTRA SPACE, NO STACK) (only changing links) ------------------

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* temp = head;
//         ListNode* prev = nullptr;

//         while(temp != NULL){
//             ListNode* front = temp -> next;
//             temp -> next = prev;
//             prev = temp;
//             temp = front;
//         }
//         return prev;
//     }
// };

// ---------------------- Recrsive Approach --------------------------------------------------------------

//Solve for 1 node, 2 node, 3 node and basically breakdown LL into smaller tasks for recursive app

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL){   //Handeled for one node
            return head;  
        } 

        ListNode* newhead = reverseList(head -> next); //Pass the next one
        ListNode* front = head -> next; //Assign the front
        front -> next = head; // Set connections to back
        head -> next = nullptr;  //Set head to nullptr
        return newhead;
    }
};
