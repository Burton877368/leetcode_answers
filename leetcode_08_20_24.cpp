//58. Length of Last Word

/*
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal 
substring
 consisting of non-space characters only.
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        if(len == 1) return 1;
        int count = 0, n = len - 1;

        while(n>0 && s[n] == ' ') n--;

        for(int i = n; i>=0; i--){
            if(s[i] == ' ') break;
            count++;
        }

        return count;
    }
};
