class Solution {
public:
    bool isPowerOfTwo(int n) {

           int ans;
        for(int i=0;i<=30;i++)
        {
            ans = pow(2,i);
        
         if(n==ans)         // check with the input number if it matches with the power 
          {
              return true;
          }   
        }
        return false;
          
    }
};
