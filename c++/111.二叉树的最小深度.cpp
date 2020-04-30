/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;


        int r=minDepth(root->right);
        int l=minDepth(root->left); 
//只用1+min遇到[1,2]会容易翻车，所以加一个判断，若l和r有一个为空
//则用1+l+r,此时l和r至少有一个是0，并不影响总体，只针对特殊情况
        return (l&&r)?1+min(l,r):1+l+r;
        
    
    }
};
// @lc code=end

