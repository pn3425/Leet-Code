/* Brute Force , TC -> O(n * n)
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        for(int i=0;i<s.length();i++){
            string rotated = s.substr(i) + s.substr(0,i);
            if(rotated == goal){
                return true;
            } 
        }
    return false;      
    }
}; */

// Optimal -> O(n)

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        string doubledS = s + s; // Combining the word
        return doubledS.find(goal) != string::npos; // Find the goal in doubled string, if found return true else false (find.goal() -> returns the index, if didnt find returns string.npos)
    }
};
