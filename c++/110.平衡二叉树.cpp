/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
#include<math.h>
class Solution {
public:
    int process(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=process(root->left);
        if(l==-1)
        {
            return -1;
        }
        int r=process(root->right);
        if(r==-1)
        {
            return -1;
        }
        return abs(l-r)>1 ? -1 : 1+max(l,r);

    }
    bool isBalanced(TreeNode* root) {

        return process(root)!=-1;
    }
};
// @lc code=end

