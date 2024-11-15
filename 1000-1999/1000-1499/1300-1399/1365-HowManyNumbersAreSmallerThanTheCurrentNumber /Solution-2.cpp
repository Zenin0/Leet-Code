class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        unordered_map<int, int> numToCount;
        for (int i = 0; i < sortedNums.size(); i++) {
            if (numToCount.find(sortedNums[i]) == numToCount.end()) {
                numToCount[sortedNums[i]] = i;
            }
        }

        vector<int> out;
        for (int num : nums) {
            out.push_back(numToCount[num]);
        }

        return out;
    }
};
