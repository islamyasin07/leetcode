class Solution {
    string smallest = "~"; 

    void dfs(TreeNode* node, string path) {
        if (!node) return;
        path = char('a' + node->val) + path;
        if (!node->left && !node->right) {
            if (path < smallest)
                smallest = path;
        }
        dfs(node->left, path);
        dfs(node->right, path);
    }
public:
    string smallestFromLeaf(TreeNode* root) {
        dfs(root, "");
        return smallest;
    }
};
