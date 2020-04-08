/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isjx(root,root);
    }
    bool isjx(TreeNode* l,TreeNode* r){
        if(!l&&!r)
        {
            return true;
        }
        else if(!l||!r)
        {
            return false;
        }
        else if(l->val==r->val)
        {
            //进入子树，递归看左右两棵子树左右节点是否对称
            return isjx(l->left,r->right)&&isjx(l->right,r->left);
        }
        return false;
    }
};
// @lc code=end

