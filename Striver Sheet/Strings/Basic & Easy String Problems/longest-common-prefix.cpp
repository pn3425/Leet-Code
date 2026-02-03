class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(),strs.end()); // Sorting lexicographically
        string s1 = strs[0];
        string s2 = strs[n-1];
        string ans = "";
        int i = 0;

        if (strs.empty()) return "";

        while( i < s1.size() && i < s2.size()){
            if(s1[i] == s2[i]){
                ans += s1[i];
                i++;
            }
            else{
                break;
            }
        }
    return ans;
    }
};
