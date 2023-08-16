class Solution {
public:
    int trailingZeroes(int n) {
        
      int cnt=0,q;
        while(n>=5)
       {
     
        q=n/5;
        cnt=cnt+q;
        n=n/5;
        }
        
    return cnt;
        
    }
};
