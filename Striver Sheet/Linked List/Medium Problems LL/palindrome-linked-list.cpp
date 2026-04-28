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

 //------------------- Brute Force, Using stack, TC -> O(2N), SC -> O(N) -------------------------------------- 
/*
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* temp = head;
        
        // S1: Put everything in stack
        while(temp != NULL){
            st.push(temp->val);
            temp = temp -> next;
        }

        // S2: Compare
        temp = head;
        while(temp != NULL){
            if(temp -> val != st.top()){
                return false;
            }
                temp = temp -> next;
                st.pop();
        }
        return true;
    }
}; */

//------------------ Optimzed Solution: TC -> O(N/2) , SC -> O(1) -------------------------------------

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


class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if(head == NULL || head -> next == NULL) return true; // Only if one node

        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Traverse and reach middle

        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        // Step 2: Reversing second half
        ListNode* newhead = reverseList(slow -> next);
     
        // Step 3: Comparing
        ListNode* first = head;   //Assigning 
        ListNode* second = newhead;

        while(second != NULL){
            if(first -> val != second -> val){
                reverseList(newhead);   //Since we are reversing earlier, it is alwayus good practise to get back to same state of given LL
                return false;
            }
          first = first -> next;
          second = second -> next;
        }
        reverseList(newhead);
        return true;
    }
};
