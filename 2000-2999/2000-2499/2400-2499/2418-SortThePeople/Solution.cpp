class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int gt,n;
        vector<int> sorted;

        for (int i = 0; i < heights.size(); i++) {
            for (int j = i; j < (heights.size()); j++) {
                if (heights[i] < heights[j]) {
                    swap(heights[i], heights[j]);
                    swap(names[i], names[j]);
                }
            }
        }
        return names;
    }
};