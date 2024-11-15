class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> index;
        for (int i = 0; i < words.size(); i++){
            for (int ii = 0; ii < words[i].size(); ii++){
                if (words[i][ii] == x) {
                    index.push_back(i);
                    break;
                }
            }
        }
        return index;
    }
};