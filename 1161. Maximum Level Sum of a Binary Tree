class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if (!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        
        int maxSum = INT_MIN;
        int level = 0;
        int resultLevel = 0;
        while (!q.empty()) {
            level++;
            int size = q.size();
            int sum = 0;
            
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front(); q.pop();
                sum += node->val;
                if (node->left)  q.push(node->left);
                if (node->right) q.push(node->right);
            }

            if (sum > maxSum) {
                maxSum = sum;
                resultLevel = level;
            }
        }
        return resultLevel;
    }
};
