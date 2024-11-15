class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> out;
        int c = 0;
        for (int i = 0; i < nums.size(); i++){
            for (int ii = 0; ii < nums.size(); ii++){
                if (nums[ii] < nums[i] && i != ii){
                    c++;
                }
            }
            out.push_back(c);
            c = 0;
        }
        return out;
    }
};