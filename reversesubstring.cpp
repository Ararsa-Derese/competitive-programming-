class Solution {
public:
    string reverseParentheses(string s) {
          vector<int> ans;
        string res;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(')
                ans.push_back(res.length());
            else if (s[i] == ')') {
                int j = ans.back();
                ans.pop_back();
                reverse(res.begin() + j, res.end());
            } else {
                res += s[i];
            }
        }
        return res;
    }
};
