class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        char c;
        char lastInserted;
        for (int i = 0; i < s.size(); i++) {
            c = s[i];
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else {
                if (stack.empty() ||
                    (c == ')' && stack.top() != '(') ||
                    (c == '}' && stack.top() != '{') ||
                    (c == ']' && stack.top() != '[')) {
                    return false;
                    }
                stack.pop();
            }
        }
        return (stack.size() == 0);
    }
};