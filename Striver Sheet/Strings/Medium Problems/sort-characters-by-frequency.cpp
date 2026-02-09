// class Solution {
// public:

//     static bool comparator(pair<int,char>p1, pair<int,char>p2){
//         if(p1.first > p2.first) return true;
//         if(p1.first < p2. first) return false;
//         return p1.second < p2.second;
//     }
//     string frequencySort(string s) {
//         pair<int,char> freq[256];

//         //Initialize the freq array
//         for(int i=0;i<256;i++){
//             freq[i] = {0, char(i +'a')};
//         }

//         //Count the frequencies
//         for (char ch : s) {
//             freq[(unsigned char)ch].first++;
//         }

//         sort(freq,freq+256,comparator); // Sorting according to frequencies and then by letter

//         // Final Ans output
//         string ans = "";
//         for(int i=0 ; i<256; i++){
//             int count = freq[i].first;
//             char ch = freq[i].second;

//             while(count--){
//                 ans.push_back(ch);
//             }
//         }
//         return ans;

//     }
// };
// tc -> O(N)
class Solution {
public:
    // Sort by frequency descending, then by character ascending
    static bool comparator(const pair<int, char>& p1,
                           const pair<int, char>& p2) {
        if (p1.first > p2.first) return true;
        if (p1.first < p2.first) return false;
        return p1.second < p2.second;
    }

    string frequencySort(string s) {

        // Full ASCII range to handle A–Z, a–z, digits safely
        pair<int, char> freq[256];

        // Initialize
        for (int i = 0; i < 256; i++) {
            freq[i] = {0, char(i)};
        }

        // Count frequencies (SAFE indexing)
        for (char ch : s) {
            freq[(unsigned char)ch].first++;
        }

        // Sort by frequency, then character
        sort(freq, freq + 256, comparator);

        // Build result
        string ans;
        ans.reserve(s.size());   // optimization for large input

        for (int i = 0; i < 256; i++) {
            while (freq[i].first--) {
                ans.push_back(freq[i].second);
            }
        }

        return ans;
    }
};
