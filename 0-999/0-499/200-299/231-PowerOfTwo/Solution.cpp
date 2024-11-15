class Solution {
public:
    bool isPowerOfTwo(int n) {
        // The only power of 1 is 1 itself
        if (n == 1)
            return true;;
    
        // Repeatedly compute power of x
        long int pow = 1;
        while (pow < n)
            pow *= 2;
    
        // Check if power of x becomes y
        return (pow == n);
    }
};