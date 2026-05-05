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

 //------------------------ BRUTE FORCE : TC -> O(2n) SC-> 0(n), Using Arr to store the element at odd and even index and then use these elements and replace in the main LL ---------------------------------

/*
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;

        if(head == NULL && head -> next == NULL) return head; //Edge Case (1 node)

        // Go to ODD index and put the element present in the vector
        while(temp != NULL && temp -> next != NULL){
            arr.push_back(temp -> val);
            temp = temp -> next -> next;
        }
        
        if(temp) arr.push_back(temp -> val); // To prevent skipping the last element addition in vector list

        temp = head -> next; //Set temp and even index
        // Go to EVEN index and put the element present in the vector
        while(temp != NULL && temp -> next != NULL){
            arr.push_back(temp -> val);
            temp = temp -> next -> next;
        }

        if(temp) arr.push_back(temp -> val);

        temp = head;
        int i=0;
        //Insert the element present in vector into the LL
        while(temp != NULL){
            temp -> val = arr[i];
            i++;
            temp = temp -> next;
        }
        return head;
    }
};*/

// ----- Optimized : Just change the links, group even then odd, and then combine , TC -> O(N), SC -> O(1) --------
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head; //Edge Case. if only 1 node

        ListNode* Odd = head;
        ListNode* Even = head -> next;
        ListNode* EvenHead = head -> next;

        while(Even != NULL && Even -> next != NULL){
            Odd -> next = Odd -> next -> next;
            Even -> next = Even -> next -> next;
            Odd = Odd -> next;
            Even = Even -> next;
        }
        Odd -> next = EvenHead;
        return head;
    }
};
