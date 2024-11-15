class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1)
            return true;
        ;
        long int pow = 1;
        while (pow < n)
            pow *= 4;

        return (pow == n);
    }
};