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
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stack;
        //input all leftmost nodes
        vector<int> ans;
        TreeNode* node=root;
        while(node!=NULL){
            stack.push(node);
            node=node->left;
        }
        while(stack.empty()==false)
        {
            node=stack.top();
            stack.pop();
            ans.push_back(node->val);
            node=node->right;
            while(node!=nullptr){
            stack.push(node);
            node=node->left;
            }
        }
        return ans;
    }
    


    // Recursive Approach
    // void inorderRecursive(TreeNode* node, vector<int> &ans)
    // {
    //     if (node==nullptr)
    //     {
    //         return;
    //     }
    //     inorderRecursive(node->left, ans);
    //     ans.push_back(node->val);
    //     inorderRecursive(node->right,ans)
    // }
};
