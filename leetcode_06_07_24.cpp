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
        int i = s.length() - 1;
        int count = 0;

        while (s[i] == ' ') {
            --i;
        }

        while (s[i] != ' ') {
            ++count;
            --i;
        }

        return count;
    }
};
