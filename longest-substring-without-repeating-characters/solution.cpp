class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int max_len = 0;
        int left = 0;

        vector<int> charIndex(256, -1);
        for(int right = 0; right < n; ++right){
            char currentChar = s[right];
            if (charIndex[currentChar] >= left){
                left = charIndex[currentChar] + 1;
            }
            charIndex[currentChar] = right;
            max_len = max(max_len, right - left + 1);
        }
        return max_len;
    }
};