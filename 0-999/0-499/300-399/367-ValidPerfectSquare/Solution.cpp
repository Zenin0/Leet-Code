class Solution {
public:
    bool isPerfectSquare(int num) {
        if (int(sqrt(num)) == sqrt(num)) {
            return true;
        }
        return false;
    }
};