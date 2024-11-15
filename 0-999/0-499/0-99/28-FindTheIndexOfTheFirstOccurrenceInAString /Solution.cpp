class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleSize = needle.size();
        int haystackSize = haystack.size();

        if (needleSize == 0) return 0;

        for (int i = 0; i <= haystackSize - needleSize; i++) {
            if (haystack.substr(i, needleSize) == needle) {
                return i;
            }
        }
        return -1;
    }
};
