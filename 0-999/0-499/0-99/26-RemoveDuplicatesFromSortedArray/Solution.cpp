class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lastNumberNotRepeted = -101;
        for (int i = 0; i < nums.size(); ) {
            if (nums[i] == lastNumberNotRepeted) {
                nums.erase(nums.begin() + i);
            } else {
                lastNumberNotRepeted = nums[i];
                i++;
            }
        }
        return nums.size();
    }
};
