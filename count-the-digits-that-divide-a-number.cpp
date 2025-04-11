class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int r;
        int count=0;
        
        if(n==0)
        {
            return 0;
        }

        while(n>0)
        {
            r=n%10;
            if(num % r == 0)
            {
                count++;
            }
            n=n/10;
        }
        
        return count;
        
    }
};

/*
int n=num;
int r;
int q;
while(n>0)
{
 r=n%10;       //1  //2  //1
 if(num%r==0) 121%1==0  121%2 ?
  {
    c++;          1 -> 2
 }
 n=n/10;        121/10 = 12 -> 1 -> 0


}

int count=0;
        int r=0;
        int n=num;
        if(n==0)
        {
            return 0;
        }
        for(int i=0;i<sizeof(num);i++)
       {

        r=n%10;
        if(r!=0 && num % r == 0)
        {
            count++;
        }
            n=n/10;
       }
       return count;
*/
