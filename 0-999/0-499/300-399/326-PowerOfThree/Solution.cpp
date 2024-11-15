class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1)
            return true;
        ;
        long int pow = 1;
        while (pow < n)
            pow *= 3;

        return (pow == n);
    }
};