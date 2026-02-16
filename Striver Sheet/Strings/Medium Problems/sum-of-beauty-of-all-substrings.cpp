class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        long long sum = 0;
        for(int i = 0; i < n; i++){
            unordered_map<char,int> freq;
            
            for(int j=i; j<n; j++){
                freq[s[j]]++;

                int mini = INT_MAX;
                int maxi = INT_MIN;

                for(auto st : freq){
                    mini = min(mini, st.second);
                    maxi = max(maxi, st.second);
                }
                sum += (maxi-mini);
            }
        }
        return sum;
    }
};
