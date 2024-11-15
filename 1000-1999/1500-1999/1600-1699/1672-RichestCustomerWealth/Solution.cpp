class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int gt = 0;
        int sum = 0;
        vector<int> account;
        for (int i = 0; i < accounts.size(); i++){
            for (int ii = 0; ii < accounts[i].size(); ii++){
                sum += accounts[i][ii];
            }
            if (sum > gt){
                gt = sum;
            }
            sum = 0;

        }
        return gt;
    }
};