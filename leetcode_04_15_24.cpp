/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int sum = 0;
public:
    int Sum(TreeNode* root, int path) {
            if (root == nullptr) {
                return 0;
            }
            if (root->left == nullptr && root->right == nullptr) {
                sum += 10*path + root->val;
                return 0;
            }
            Sum(root->left, 10*path + root->val);
            Sum(root->right, 10*path + root->val);
            return 0;
        }

    int sumNumbers(TreeNode* root) {

        

        Sum(root, 0);
        return sum;
    }
};
