class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) {
            return 0;
        }

        int maxLength = 0;
        int start = 0;
        unordered_map<char, int> seen;

        for (int i = 0; i < s.size(); i++) {

            if (seen.find(s[i]) != seen.end() && seen[s[i]] >= start) {
                start = seen[s[i]] + 1;
            }

            seen[s[i]] = i;
            maxLength = max(maxLength, i - start + 1);
        }

        return maxLength;
    }
};

