/* TC -> O(n) , Using Stack Approach */
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;   //Initialize stack
        string ans = "";  // Ans variable

        for(char ch : s){ // Iterate each char of string
            if( ch == '('){
                if(!st.empty()) ans += '(';  // If stack is not empty, then just add ' ( '
                st.push('('); // Then push in the stack
            }
            else{
                st.pop(); // Pop the top
                if(!st.empty()) ans += ')'; //  If stack is not empty, then just add ' ) '
            }
        }
    return ans;  
    }
}; 
