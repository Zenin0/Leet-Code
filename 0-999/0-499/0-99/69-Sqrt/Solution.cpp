class Solution {
public:
    int mySqrt(int x) {
        if (x == 1) {
            return 1;
        }
        int start = 1;
        int end = floor(x/2);
        long mid;
        while (start <= end){
            mid = floor(start + ( end - start ) / 2);
            if ( mid * mid == x){
                return mid;
            } else if (mid * mid > x){
                end = mid -1;
            } else {
                start = mid + 1;
            }
        }
        return end;
    }
};