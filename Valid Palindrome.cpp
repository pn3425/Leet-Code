class Solution {

private:

bool isvalid(char ch)
{
   if(ch>='a' && ch<='z'|| ch>='A' && ch<='Z' || ch>='0' && ch<='9')
   {
       return 1;
   }
  else
  return 0;

}

char tolowercase(char ch)
{

  if(ch>='a' && ch<='z'|| ch>='0' && ch<='9')
  {
       return ch;
  }

  else
  {
      char temp = ch - 'A' + 'a';
      return temp;
  }
}



bool checkpalindrome(string s)
{
    int st = 0;
    int e = s.length() - 1;

    while (st <= e)
    {
        if (s[st] != s[e])
        {
            return 0;}

        else
        {
            st++ ; e--;
        }
       
    }
     return 1;
}


public:
    bool isPalindrome(string s) {


         //To remove alphanumeric character
        string temp = "";
        for(int i=0;i<s.length();i++)
        {
            if(isvalid(s[i]))
            {
            temp.push_back(s[i]);
            }
        }

        //To convert upper case to lower 

        for(int i=0;i<temp.length();i++)
        {
            temp[i] = tolowercase(temp[i]);
        }
    
        return checkpalindrome(temp);

        
    }
};
