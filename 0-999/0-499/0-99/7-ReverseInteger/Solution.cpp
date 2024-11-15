class Solution {
public:
    int reverse(int x) {
        bool isNegative = x < 0;
        long long reversed = 0;
        x = abs(x);
        while (x > 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        if (isNegative) {
            reversed = -reversed;
        }
        if (reversed > INT_MAX || reversed < INT_MIN) {
            return 0;
        }
        return reversed;
    }
};
