class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1,rem;
        int sum=0;
       while(n!=0){
        rem=n%10;
        sum = sum + rem;
        pro = pro * rem;
        n = n/10;
       }
       int sub = pro - sum; 
       return sub;
    }
   
};
