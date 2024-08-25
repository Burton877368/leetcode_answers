//9. Palindrome Number

/*
Given an integer x, return true if x is a 
palindrome
, and false otherwise.
*/

//Beats 70%

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        string word = to_string(x);
        string reversed_word = word;
        reverse(word.begin(), word.end());

        return (word == reversed_word);
    }
};
