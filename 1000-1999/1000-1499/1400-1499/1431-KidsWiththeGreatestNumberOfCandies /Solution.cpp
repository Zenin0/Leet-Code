class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> out;
        for (int candy : candies) {
            out.push_back(candy + extraCandies >= *max_element(candies.begin(), candies.end()));
        }

        return out;
    }
};
