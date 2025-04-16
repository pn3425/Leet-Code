class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x!=0){
        int digit = x%10;
        if((ans > INT_MAX/10)  || (ans < INT_MIN/10))
        {
            return 0;
        }

        ans = (ans*10) + digit;
        x=x/10;   
        }
        return ans;
    }
};

//Another Approach to handle INT_MIN AND INT_MAX
/*
class Solution {
public:
    int reverse(int x) {
         int r;
        int revnum = 0;

        while(x!=0){
        r = x % 10;a

        if(revnum > INT_MAX / 10 || (revnum == INT_MAX / 10 && r > 7 ))return 0;
        if(revnum < INT_MIN / 10 || (revnum == INT_MIN /10 && r < -8)) return 0;
        revnum = (10*revnum) + r;
        x = x/10;
        }
        return revnum; 
    }
};

1) if (revnum > INT_MAX / 10 || (revnum == INT_MAX / 10 && digit > 7)) return 0;
Breakdown:
INT_MAX = 2147483647

INT_MAX / 10 = 214748364

So if revnum is already more than 214748364, then multiplying by 10 will definitely overflow.

If revnum == 214748364, we're right on the edge. We must ensure the next digit doesn't push it over:

The last digit of INT_MAX is 7.

So if digit > 7, then the final result will be greater than INT_MAX → overflow.

2) if (revnum < INT_MIN / 10 || (revnum == INT_MIN / 10 && digit < -8)) return 0;

Breakdown:
INT_MIN = -2147483648

INT_MIN / 10 = -214748364

If revnum < -214748364, multiplying by 10 will underflow.

If revnum == -214748364, then we check if adding another negative digit like -9 will push it below INT_MIN.

The last digit of INT_MIN is -8, so digit < -8 means it's too much.



















*/
