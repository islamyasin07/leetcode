class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st; 
        st.push(-1);          
        long long best = 0;
        for (int i = 0; i < n; i++) {
            while (st.top() != -1 && heights[i] < heights[st.top()]) {
                int h = heights[st.top()]; st.pop();
                int left = st.top();         
                long long width = i - left - 1;
                best = max(best, 1LL * h * width);
            }
            st.push(i);
        }
        while (st.top() != -1) {
            int h = heights[st.top()]; st.pop();
            int left = st.top();
            long long width = n - left - 1;
            best = max(best, 1LL * h * width);
        }
        return (int)best;
    }
};
