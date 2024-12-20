class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() == 1){
            return 0;
        }

        for (int i = 0; i < nums.size() - 1; i++){
            if (nums[i + 1] < nums[i]) {
                return i;
            }
        }
        return nums.size() - 1;
    }
};