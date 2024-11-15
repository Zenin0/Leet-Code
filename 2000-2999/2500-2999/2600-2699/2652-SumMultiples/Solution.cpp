class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int> sumable;
        for (int i = 1; i <= n; i++){
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sumable.push_back(i);
            }
        }

        int result = 0;
        for (int i = 0; i < sumable.size(); i++) {
            result += sumable[i];
        }
        return  result;

    }
};