class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;

        while(i<n && s[i] == ' ') {  //Ignored Whitespace
            i++;   
        }

        // Handling negative sign
        int sign = 1;
        if(i<n && (s[i] == '+' || s[i] == '-')){
            if(s[i] == '-') sign = -1;
            i++;
        }

        // Converting integers from string to int (Formation)

        long long res = 0;
        while(i<n && (s[i] >= '0' && s[i] <= '9')){
            res = res * 10 + (s[i] - '0');

            //Handling overflow condition

            if( res * sign > INT_MAX) return INT_MAX;
            if( res * sign < INT_MIN) return INT_MIN;
            i++;
        }
    return sign * res;

    }
};
