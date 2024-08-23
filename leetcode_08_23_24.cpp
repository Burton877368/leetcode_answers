//3. Longest Substring Without Repeating Characters

/*
Given a string s, find the length of the longest 
substring
 without repeating characters.
*/

//Beats 80%

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) {
            return 0;
        }

        string currString = "";
        int ret = 0;
        int count = 0;
        int pos = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (currString.contains(s.at(i))) {
                pos = currString.find(s.at(i)) + 1;
                currString += s.at(i);
                currString.erase(0, pos);
                count -= (pos - 1);
            } else {
                currString += s.at(i);
                ++count;
            }

            if (count > ret) {
                ret = count;
            }
        }

        return ret;
    }
};
