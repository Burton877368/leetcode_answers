//28. Find the Index of the First Occurrence in a String

/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() > haystack.length()) {
            return -1;
        } else if (needle == haystack) {
            return 0;
        }

        for (int i = 0; i < (haystack.length() - needle.length() + 1); i++) {
            bool wrong = false;
            for (int j = 0; j < needle.length(); j++) {
                if (haystack.at(i + j) != needle.at(j)) {
                    wrong = true;
                    break;
                }
            }

            if (!wrong) {
                return i;
            }
        }
        return -1;
    }
};
