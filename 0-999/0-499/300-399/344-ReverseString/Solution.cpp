class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> aux = s;
        int j = 0;
        for (int i = aux.size() - 1; i >= 0; i--){
            s[j] = aux[i];
            j++;
        }
    }
};