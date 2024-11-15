class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int ii = i + 1; ii < nums.size(); ii++) {
                if (nums[i] + nums[ii] == target) {
                    return {i, ii};
                };
            };
        };
        return {};
    };
};

