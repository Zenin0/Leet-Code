class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int now = 0;
        int gt = 0;

        for (int i = 0; i < gain.size(); i++) {
            now += gain[i];
            if (now > gt) {
                gt = now;
            }
        }

        return gt;
    }
};
