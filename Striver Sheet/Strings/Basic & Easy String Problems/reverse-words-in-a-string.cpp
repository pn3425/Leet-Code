class Solution {
public:
//-----------------------Brute Force : TC -> O(n) & SC -> O(1), Using Vector List-----------------------------
    /*
    string reverseWords(string s) {

     vector<string> words;  // Declare a vector to store
     string word = ""; // Declare a string variable

     for(int i=0;i<s.size();i++){
        if(s[i] != ' '){   // Check char by char, if it encounters any space
            word += s[i];  // If not keep adding each char one by one in word string
        }
        else if(!word.empty()){  // If the word string is not empty
            words.push_back(word);  // Push the word in the words vector
            word = ""; // Reassign the word to "", so to accompany the next word from the ques
        }
     } 
     if(!word.empty()){   // Push the last word if it exists
            words.push_back(word);
      }

      reverse(words.begin(),words.end());   //Now reverse the list

      string result = "";   // Declare result variable
      for(int i=0;i<words.size();i++){
        result += words[i];  // Add the words[i] one by one to result

        if( i < words.size() - 1){ // Add spaces 
        result += " ";
        }
      }
       return result; 
    } */

// -------------------------------------- OPTIMAL : TC -> O(N), SC -> O(1)-------------------------------
/*
Initialize an empty result string.
Set a pointer at the last character of the string.
While the pointer is within the string:
Skip all spaces to move to the end of a word.
Mark the end position of the word.
Move the pointer backward until a space or start of string is found.
Extract the word and append it to the result string.
If result is not empty, add a space before appending the next word.
*/

     string reverseWords(string s) {
        string result = "";
        int i = s.size()-1;
        while(i >= 0){

             while( i >= 0 && s[i] == ' '){
                i--;
            }

            if(i<0) break;

            int end = i;

            while( i >= 0 && s[i] != ' '){
                i--;
            }

            string word = s.substr(i+1,end-i);

            if(!result.empty()){
                result += " ";
            }

            result += word;
        }
    return result;

     }
};
