class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(res, "", 0, 0, n);
        return res;
    }
private:
    void backtrack(vector<string>& res, string cur, int open, int close, int n) {
        if (cur.size() == n * 2) {
            res.push_back(cur);
            return;
        }
        if (open < n) backtrack(res, cur + "(", open + 1, close, n);
        if (close < open) backtrack(res, cur + ")", open, close + 1, n);
    }
};
