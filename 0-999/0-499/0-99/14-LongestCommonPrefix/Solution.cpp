class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0){
            return "";
        }
        string base = strs[0];
        for (int i = 0; i < base.size(); i++){
            for (int ii = 0; ii < strs.size(); ii++){
                if (i == strs[ii].size() || strs[ii][i] != base[i]) {
                    return base.substr(0, i);
                }
            }
        }
        return base;
    }
};