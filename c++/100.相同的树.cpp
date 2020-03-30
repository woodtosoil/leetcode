/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
        {
            return true;
        }
        else if(!p||!q)
        {
            return false;
        }
        else if(p->val!=q->val)
        {
            return false;
        }
        //先判断根节点，再迭代判断左右分支节点
        bool left=isSameTree(p->left,q->left);
        bool right=isSameTree(p->right,q->right);
        return(left&&right);
    }
};
// @lc code=end

